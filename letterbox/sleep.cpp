/*************
 *-=sleep.c=-*
 *************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Permet de gérer la mise en veille de l'arduino.
*/

//-=Inclusion des headers=-//
#include <inttypes.h>	//Pour les types du genre uint8_t

#include <avr/power.h>	//Permet d'utiliser les fonctions de gestion de l'énergie
#include <avr/sleep.h>	//Permet d'utiliser les fonctions de mise en veille.

#include "sleep.h"
//-=Fin de la section=-//

//-=Fonction callback pour l'interruption=-//
/*
	Le callback suivant est appelé lorsque l'arduino se réveille.
	Ainsi, on enlève ici le mode veille, en supprimant l'interruption
	configurée pour le réveil, ainsi qu'en réactivant tous les éléments
	qui ont été arrétés pour économiser de l'énergie.
*/
void wakeUp()
{
	cli(); //Désactive les interruptions, pour éviter de reappeler cette fonction une deuxième fois.

	//-=Désactivation mise en veille=-//
	detachInterrupt(0); //On enlève l'interruption
	power_all_enable(); //On réactive timers, adc, twi, etc.
	//-=Fin de la section=-//

	sei(); //On réactive les interruptions.
}
//-=Fin de la section=-//
namespace sleep
{
	void setup()
	{
		//-=Réglage des pins=-//
		pinMode(2, INPUT);
		//-=Fin de la section=-//
			
		//-=Définition du mode de mise en veille=-//
		set_sleep_mode(SLEEP_MODE_PWR_SAVE);
		//-=Fin de la section=-//
	}

	/*
		La fonction suivante active la mise en veille de l'appareil.
		Pour ce faire, elle :
			-> Active le mode veille avec sleep_enable();
			-> Attache l'interruption du pin2 sur la fonction wakeUp pour permettre le réveil
			-> Désactive les éléments de l'arduino qui nous serviront pas durant la non-utilisation (timers, adc, twi...)
			-> Met en veille du microcontréleur.
			
		Cette fonction est bloquante ; c'est à dire qu'à son appel, on sait que l'appareil est sorti de
		la mise en veille quand la fonction ayant appelé celle-ci reprend la main.
	*/
	void now()
	{
		#ifdef ARDUINO_SLEEP_LOG_ENABLE
		Serial.println(messages[0]);
		Serial.flush();
		#endif

		cli(); 			//On désactive les interruptions	
		sleep_enable();	//Activation du mode de mise en veille

		attachInterrupt(0, wakeUp, LOW);
		
		//-=Désactivation des éléments inutiles=-//
		power_adc_disable();
		power_spi_disable();
		power_timer0_disable();
		power_timer1_disable();
		power_timer2_disable();
		power_twi_disable();
		//-=Fin de la section=-//

		while(!digitalRead(2)) //Sécurité pour éviter une interruption non voulue.
		{
			delay(1); //On attend un peu pour laisser éventuellement le temps d'enlever le contact
		}
		
		sei(); //On active les interruption

		sleep_mode(); //On met en veille ; on attend.
		//* Le programme reprend ici après la sortie du mode veille et l'appel à wakeUp *
		
		//--Message de log (on ne peut pas le mettre dans la fonction wakeUp, car l'appel aux fonctions serial est déconseillé dans les ISR)
		#ifdef ARDUINO_SLEEP_LOG_ENABLE
		Serial.println(messages[1]);
		Serial.flush(); //On affiche immédiatement ; pas question de laisser le message traîner dans le buffer :p
		#endif
		
		sleep_disable(); //On désactive le mode veille.
	}
}
