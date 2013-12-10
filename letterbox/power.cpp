/***************
 *-=power.cpp=-*
 ***************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Permet de gérer l'énergie.
*/

//-=Inclusion des headers=-//
#include <avr/power.h>	//Permet d'utiliser les fonctions de gestion de l'énergie

#include "power.h"
#include "pins.h"
//-=Fin de la section=-//

namespace power
{
	void setup()
	{
		power_adc_disable();		//Désactive le CAN
		power_spi_disable();		//Désactive le bus SPI
		power_twi_disable();		//Désactive le bus I2C
		
		//Commentés au cas où mais normalement utilisés par le Serial donc nécessaires
		//power_timer0_disable();		//Désactive le timer 0
		//power_timer1_disable();		//Désactive le timer 1
		//power_timer2_disable();		//Désactive le timer 2
	}
	
	void shutdown()
	{
		//On envoie une tension sur la commande du transistor qui va ouvrir le circuit.
		digitalWrite(pin::shutdownPin, HIGH);
	}
}