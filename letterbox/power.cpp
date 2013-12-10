/***************
 *-=power.cpp=-*
 ***************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Permet de g�rer l'�nergie.
*/

//-=Inclusion des headers=-//
#include <avr/power.h>	//Permet d'utiliser les fonctions de gestion de l'�nergie

#include "power.h"
#include "pins.h"
//-=Fin de la section=-//

namespace power
{
	void setup()
	{
		power_adc_disable();		//D�sactive le CAN
		power_spi_disable();		//D�sactive le bus SPI
		power_twi_disable();		//D�sactive le bus I2C
		
		//Comment�s au cas o� mais normalement utilis�s par le Serial donc n�cessaires
		//power_timer0_disable();		//D�sactive le timer 0
		//power_timer1_disable();		//D�sactive le timer 1
		//power_timer2_disable();		//D�sactive le timer 2
	}
	
	void shutdown()
	{
		//On envoie une tension sur la commande du transistor qui va ouvrir le circuit.
		digitalWrite(pin::shutdownPin, HIGH);
	}
}