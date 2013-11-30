/************
 *-=pins.h=-*
 ************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Contient les constantes pour associer les entrées/sorties aux pins de l'arduino.
*/
#ifndef HEADER_PINS
#define HEADER_PINS

//-=Inclusion des headers=-//
#include <inttypes.h> //Pour uint8_t
//-=Fin de la section=-//

namespace pin
{
	const uint8_t interrupt = 2;
	const uint8_t door = 3;
	const uint8_t trapdoor = 4;
	const uint8_t lowbattery = 5;
	
	//--Fonctions
	void setup() //Permet d'initialiser les modes des pins
	{
		pinMode(interrupt, INPUT);
		pinMode(door, INPUT);
		pinMode(trapdoor, INPUT);
		pinMode(lowbattery, INPUT);
	}
}

#endif
