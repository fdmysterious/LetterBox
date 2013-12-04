/************
 *-=pins.h=-*
 ************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Permet de configurer les pins.
*/
#ifndef HEADER_PINS
#define HEADER_PINS

//-=Inclusion des headers=-//
#include <inttypes.h> //pour le type uint8_t
#include <Arduino.h>
//-=Fin de la section=-//

namespace pin
{
	#error Configurer les numéros des pins.
	const uint8_t door     = /*TODO*/;
	const uint8_t trapdoor = /*TODO*/;
	
	const uint8_t debugLed = 13;
	
	//-=Pins XBee=-//
	const uint8_t xbee_rx = 3;
	const uint8_t xbee_tx = 4;
	//-=Fin de la section=-//
	
	//-=Relai d'arrêt=-//
	const uint8_t shutdownRelay = /*TODO*/;
	//-=Fin de la section=-//
	
	void setup();
}

#endif