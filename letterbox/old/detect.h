/**************
 *-=detect.h=-*
 **************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Contient les fonctions permettant de d�tecter
	les �v�nements de la bo�te aux lettres, qui sont :
		* Rien (0x00)
		* Batterie Faible (0x42 -> 'B')
		* Colis (Porte ouverte) (0x44 -> 'D')
		* Courrier (Trappe ouverte + d�tection infrarouge) (0x4C -> 'L')
*/
#ifndef HEADER_DETECT
#define HEADER_DETECT

//-=Inclusion des headers=-//
#include <inttypes.h>
#include <Arduino.h> //Pour exploiter les fonctions de l'Arduino.

#include "pins.h"
#include "config.h"
//-=Fin de la section=-//

//-=Constantes de configuration (d�faut)=-//
//--Infrarouge
/*
	La constante de configuration suivante
	d�finit le temps pendant lequel la d�tection
	infrarouge doit durer.
*/
#ifndef DETECTION_INFRARED_TIME
#define DETECTION_INFRARED_TIME 10000
#endif

/*
	La constante de configuration suivante
	permet de d�finir le seuil pour lequel
	la d�tection infrarouge doit agir.
*/
#ifndef DETECTION_INFRARED_THRESOLD
#error TODO
#define DETECTION_INFRARED_THRESOLD /*TODO*/
#endif
//-=Fin de la section=-//

//-=Constantes �v�nements=-//
#define EVENT_NONE			0x00
#define EVENT_LOWBATTERY	0x42
#define EVENT_DOOROPENED	0x44
#define EVENT_LETTER		0x4C
//-=Fin de la section=-//

uint8_t detect(); //Permet de d�tecter si il y a eu un �v�nement

#endif
