/****************
 *-=detect.cpp=-*
 ****************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Contient les fonctions permettant de détecter
	l'état de la boîte aux lettres, qui sont :
		* Rien
		* Batterie Faible
		* Colis (Porte ouverte)
		* Courrier (Trappe ouverte + détection infrarouge)
*/

//-=Inclusion des headers=-//
#include "detect.h"
//-=Fin de la section=-//

uint8_t detect()
{
	//-=Détection batterie faible=-//
	if(!digitalRead(pin::lowbattery))
	{
		return 0x01;
	}
	//-=Fin de la section=-//
	
	//-=Détection porte ouverte=-//
	else if(!digitalRead(pin::door))
	{
		return 0x02;
	}
	//-=Fin de la section=-//
	
	//-=Détection trappe ouverte + infrarouge=-//
	else if(!digitalRead(pin::trapdoor))
	{
		/*
			La détection à partir du capteur infrarouge fonctionne de la manière suivante :
				-> Pendant une durée définie par la constante INFRARED_DETECTION_TIME,
				on prélève trois mesures de la diode infrarouge réceptrice. On fait ensuite une
				moyenne de ces trois valeurs, et si elles sont au dessus du seuil défini par
				INFRARED_DETECTION_THRESOLD, alors il y a eu détection.
		*/
	}
	//-=Fin de la section=-//
	
	else
	{
		return 0x00; //On a rien détecté
	}
}