/***************
 *-=power.cpp=-*
 ***************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Permet de gérer l'énergie.
*/

//-=Inclusion des headers=-//
#include "power.h"
#include "pins.h"
//-=Fin de la section=-//

namespace power
{
	void shutdown()
	{
		digitalWrite(pin::shutdownRelay, HIGH);
	}
}