/***********************
 *-=communication.cpp=-*
 ***********************

 Auteur : Florian Dupeyron (My?terious)
 Description : Permet d'assurer la communication entre la boîte aux lettres
 	et l'Utilisateur.
*/

//-=Inclusion des headers=-//
#include "communication.h"
//-=Fin de la section=-//

namespace communication
{
	void setup()
	{
		Serial.begin(COMMUNICATION_SERIAL_BAUD_RATE);
	}
}
