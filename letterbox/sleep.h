/*************
 *-=sleep.h=-*
 *************
 
 Auteur : Florian Dupeyron (My?terious)
 Description : Permet de gérer la fonction sommeil de l'arduino de manière simple.
*/
#ifndef HEADER_SLEEP
#define HEADER_SLEEP

//-=Inclusion des headers=-//
#include <Arduino.h>
#include <SoftwareSerial.h>
//-=Fin de la section=-//

//-=Constantes de configuration=-//
/*
	La constante suivante permet de définir le mode de veille
	choisi. Il y a plusieurs mode de veille disponibles,
	permettant chacun de réaliser plus ou moins d'économies
	d'électricité. Attention toutefois, chaque mode désactive
	plus ou moins de fonctionnalités ; on peut parfois
	se retrouver avec quelques problèmes (dans le cas où on doit
	garder la communication Serial fonctionnelle par exemple).
	
	Modes disponibles (par odre croissant d'économie d'énergie) :
	-----------------
		* SLEEP_MODE_IDLE
		* SLEEP_MODE_ADC
		* SLEEP_MODE_PWR_SAVE
		* SLEEP_MODE_STANDBY
		* SLEEP_MODE_PWR_DOWN
*/
#define ARDUINO_SLEEP_MODE SLEEP_MODE_PWR_SAVE

/*
	La constante suivante est à activer si on souhaite avoir des messages de log
	sur le Serial. On peut ensuite changer ces messages. Si on veut désactiver
	l'affichage, commenter la déclaration suivante suffit.
*/
#define ARDUINO_SLEEP_LOG_ENABLE
namespace sleep
{
	const String messages[2] = 
	{
	   "Mise en veille...",
	   "Reveil"
	};
	//-=Fin de la section=-//

	/*
		Cette fonction doit être appelée dans le setup. Elle met en place
		le mode de mise en veille voulu, défini par la constante
		ARDUINO_SLEEP_MODE, et permet
	*/
	void setup();

	/*
		Cette fonction met en veille l'appareil selon les conditions définies
		par la configuration. Elle est bloquante : le programme continue
		après l'appel à cette fonction seulement une fois que l'appareil
		est sorti de la mise en veille.
	*/
	void now();
}
#endif
