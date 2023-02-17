/*
  Titre      : Testeur de cable RJ45
  Auteur     : Ernest Samuel Andre
  Date       : 15/02/2023
  Description: Le but de ce prohramme est de tester un cable RJ45 pour voir s'il est droit ou croisé
  Version    : 0.0.1
*/
#include "Cable.hpp"


// Definition des methodes par convention on commence avec le constructeur

Cable::Cable()
{
  /*Dans ce programme nous allons utiliser un arduino MKR WIFI 1010 cela engendre que nous n'avons pas aasez de br
  broches digitaux pour mettres les fils nous allons utiliser une broche digital en envoyer sa tension maximale
  qui est de 1023 sur le fil connecte a celuici*/
    cableOrangeBlanc_ = A6;
    cableOrange_ = 0;
    cableVertBlanc_ = 1;
    cableBleu_ = 2;
    cableBleuBlanc_ = 3;
    cableVert_ = 4;
    cableBrunBlanc_ = 5;
    cableBrun_ = 6;
};

void Cable::modeDuCable1()
{
    // Definition de sortie pour la partie emeteur du testeur
    pinMode(cableOrangeBlanc_, OUTPUT);
    pinMode(cableOrange_, OUTPUT);
    pinMode(cableVertBlanc_, OUTPUT);
    pinMode(cableVert_, OUTPUT);
    pinMode(cableBleuBlanc_, OUTPUT);
    pinMode(cableBleu_, OUTPUT);
    pinMode(cableBrunBlanc_, OUTPUT);
    pinMode(cableBrun_, OUTPUT);

};
// definition de la methode qui va donner l'envoie de tension aux broches de sorties
void Cable::envoieDesignal(byte pin, int signal)
{
digitalWrite(pin, signal);

};