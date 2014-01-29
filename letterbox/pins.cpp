/************
 *-=pins.h=-*
 ************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Permet de configurer les pins.
*/

//-=Inclusion des headers=-//
#include "pins.h"
//-=Fin de la section=-//

namespace pin
{
	void setup()
	{
		pinMode(door, INPUT);
		pinMode(trapdoor, INPUT);

		//pinMode(debugLed, OUTPUT);

		pinMode(shutdownPin, OUTPUT);
	}
}
