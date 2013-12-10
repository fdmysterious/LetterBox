/*************
 *-=power.h=-*
 *************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Fonction permettant de gérer l'énergie.
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
		La fonction suivante permet de configurer l'arduino en désactivant
		les fonctions non utilisées ; le but étant d'économiser de l'énergie.
	*/
	void setup();
	
	/*
		La fonction suivante ordonne l'arrêt de l'arduino en envoyant un signal HIGH sur le pin
		shudtownRelay.
	*/
	void shutdown();
}

#endif