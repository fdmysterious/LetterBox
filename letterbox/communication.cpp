/***********************
 *-=communication.cpp=-*
 ***********************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Permet de gérer la communication avec le XBee
*/
//-=Inclusion des headers=-//
#include <memory.h>
#include <inttypes.h>

#include "communication.h"
//-=Fin de la section=-//

namespace communication
{
	void setup()
	{
		XBee.begin(XBEE_BAUD_RATE);
	}
	
	bool waitForOK()
	{
		bool run = true;
		
		char * buffer = malloc(sizeof(RECEIVE_BUFFER_SIZE)); //On alloue de la place pour notre buffer
		uint32_t i = 0;										 //Permet de savoir où on en est dans l'index
		while(run)
		{
			memset(buffer, '\0', RECEIVE_BUFFER_SIZE);		//On vide le buffer
			i = 0;											//On réinitialise l'index.

			bool lineReturn = false;
			while(!lineReturn)
			{
				if(Serial.available())
				{
					buffer[i] = Serial.read();
					
					lineReturn = buffer[i] == '\r' || buffer[i] == '\n'; //On arrête la réception si un retour à la ligne a été détecté.
					i++; 												 //On incrémente de 1 l'index du buffer.
					i = i >= RECEIVE_BUFFER_SIZE ? 0 : i;				 //Si on est arrivé au bout du buffer, on re écrase au début ; on évite les dépassements mémoire.
				}
			}
			
			if(String(buffer).startsWith("OK")) //Si le message commence par OK
			{
				run = false;	//On a détecté le message ; on peut sortir de la boucle !
			}
		}
		free(buffer); //On libère la mémoire
		
		return true;
	}
}
