/***********************************
 *-=Boîte aux lettres automatisée=-*
 ***********************************
 	Réalisée dans le Cadre des TPE 2013-2014 au Lycée Bernard Palissy par
	Florian Dupeyron, Victor Bonnin, Axel Auduberteau

Description du projet :
	Le but de ce projet s'inscrit dans le cadre de l'intelligence artificielle,
	et plus précisément des objets communicants. Il est de créer une boîte aux lettres
	capable de détecter la présence de courrier de manière autonome, et d'envoyer
	cette information à distance.

Ce fichier :
	Ce fichier est le fichier principal du programme. C'est là que sont effectués
	les différents appels aux fonctions principales.
*/

//-=Inclusion des headers=-//
#include "pins.h"
#include "sleep.h"
#include "detect.h"
#include "config.h"
//-=Fin de la section=-//

/*
	La procédure d'initialisation initialise dans l'ordre :
		-> Le matériel (Les pins)
		-> Le mode veille
		-> La communication Serial
		-> Le XBee
*/
void setup()
{
	//-=Initialisation du matériel (pins)=-//
	pin::setup();
	//-=Fin de la section=-//

	//-=Initialisation du mode veille=-//
	sleep::setup();
	//-=Fin de la section=-//
	
	//-=Initialisation de la communication Serial=-//
	communication::setup();
	//-=Fin de la section=-//

	//-=Initialisation du XBee=-//
	//TODO
	//-=Fin de la section=-//
}

/*
	La fonction suivante contient la boucle principale
	du programme. Voici son déroulement :
		-> On procède à la détection (comme ça on en fait une avant la première mise en veille)
		-> Si un résultat à été détecté, on l'affiche.
		-> On met en veille.
*/
void loop()
{
	uint8_t result;
	if((result = detect())) Serial.println(result);
	sleep::now();
}