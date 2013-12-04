﻿/***********************
 *-=communication.cpp=-*
 ***********************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Permet de gérer la communication avec le XBee
*/
//-=Inclusion des headers=-//
#include "communication.h"
//-=Fin de la section=-//

namespace communication
{
	void setup()
	{
		XBee.begin(XBEE_BAUD_RATE);
	}
}