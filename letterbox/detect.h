/**************
 *-=detect.h=-*
 **************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Contient les fonctions permettant de détecter
	les événements de la boîte aux lettres, qui sont :
		* Rien (0x00)
		* Batterie Faible (0x42 -> 'B')
		* Colis (Porte ouverte) (0x44 -> 'D')
		* Courrier (Trappe ouverte + détection infrarouge) (0x4C -> 'L')
*/
#ifndef HEADER_DETECT
#define HEADER_DETECT

//-=Inclusion des headers=-//
#include <inttypes.h>
#include <Arduino.h> //Pour exploiter les fonctions de l'Arduino.

#include "pins.h"
//-=Fin de la section=-//

//-=Constantes de configuration=-//
#define INFRARED_DETECTION_TIME 10000	//Définit le temps pendant lequel la détection infrarouge doit avoir lieu.
#define INFRARED_DETECTION_THRESOLD 0.5	//Définit le seuil de la détection infrarouge.
//-=Fin de la section=-//

uint8_t detect(); //Permet de détecter si il y a eu un événement

#endif