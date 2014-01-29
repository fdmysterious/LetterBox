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
	const uint8_t door     = 3;
	const uint8_t trapdoor = 4;
	
	//const uint8_t debugLed = 13;
	
	//-=Relai d'arrêt=-//
	const uint8_t shutdownPin = 2;
	//-=Fin de la section=-//
	
	void setup();
}

#endif
