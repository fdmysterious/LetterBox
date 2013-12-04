/*************
 *-=power.h=-*
 *************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Fonction permettant de g�rer l'�nergie.
*/
#ifndef HEADER_POWER
#define HEADER_POWER

//-=Inclusion des headers=-//
#include <inttypes.h>
#include <Arduino.h>
//-=Fin de la section=-//

namespace power
{
	/*
		La fonction suivante ordonne l'arr�t de l'arduino en envoyant un signal HIGH sur le pin
		shudtownRelay.
	*/
	void shutdown();
}

#endif