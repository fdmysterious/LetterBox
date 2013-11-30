/*********************
 *-=communication.h=-*
 *********************

 Auteur : Florian Dupeyron (My?terious)
 Description : Contient les différentes fonctions assurant la communication entre
	La boîte aux lettres et l'utilisateur.
*/
#ifndef HEADER_COMMUNICATION
#define HEADER_COMMUNICATION

//-=Inclusion des headers=-//
#include <inttypes.h>
#include <Arduino.h>

#include "pins.h"
#include "config.h"
//-=Fin de la section=-//

//-=Constantes de configuration (défaut)=-//
//--Serial
/*
	La constante suivante définit le "Baud Rate"
	pour lequel la communication Serial doit fonctionner.
*/
#ifndef COMMUNICATION_SERIAL_BAUD_RATE
#define COMMUNICATION_SERIAL_BAUD_RATE 9600
#endif
//-=Fin de la section=-//

namespace communication
{
	void setup(); //Permet de configurer la communication.
}

#endif
