/**************
 *-=config.h=-*
 **************

 Auteur : Florian Dupeyron (My?terious)
 Description : Contient toutes les constantes qui configurent le comportement.
*/
#ifndef HEADER_CONFIG
#define HEADER_CONFIG

//-=Configuration de la détection=-//
//--Infrarouge
/*
	La constante de configuration suivante
	définit le temps pendant lequel la détection
	infrarouge doit durer.
*/
#define DETECTION_INFRARED_TIME 10000

/*
	La constante de configuration suivante
	permet de définir le seuil pour lequel
	la détection infrarouge doit agir.
*/
#define DETECTION_INFRARED_THRESOLD /*TODO*/
//-=Fin de la section=-//

//-=Configuration du mode veille=-//
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
#define SLEEP_MODE SLEEP_MODE_PWR_SAVE

/*
	La constante suivante est à activer si on souhaite avoir des messages de log
	sur le Serial. On peut ensuite changer ces messages (fichier sleep.h). Si on veut désactiver
	l'affichage, commenter la déclaration suivante suffit.
*/
#define SLEEP_LOG_ENABLE
//-=Fin de la section=-//

//-=Configuration de la communication=-//
//--Serial
/*
	La constante suivante définit le "Baud Rate"
	pour lequel la communication Serial doit fonctionner.
*/
#define COMMUNICATION_SERIAL_BAUD_RATE 9600
//-=Fin de la section=-//

#endif
