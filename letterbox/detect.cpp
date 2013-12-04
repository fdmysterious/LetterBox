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
	uint8_t event = EVENT_NONE;
	
	if(digitalRead(pin::door))
	{
		event = EVENT_DOOROPENED;
	}
	
	else if(digitalRead(pin::trapdoor))
	{
		event = EVENT_LETTER;
	}
	
	return EVENT_NONE;
}