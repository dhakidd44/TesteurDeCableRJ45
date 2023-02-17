
/*
  Titre      : Testeur de cable RJ45
  Auteur     : Ernest Samuel Andre
  Date       : 15/02/2023
  Description: Le but de ce prohramme est de tester un cable RJ45 pour voir s'il est droit ou croisé
  Version    : 0.0.1
*/

#include <iostream>
#include <Arduino.h>

#ifndef MONHEADER_H
#define MONHEADER_H

class Cable // Classe pour notre cable
{
private:
    /* data */
public:
    // Attributs qui vont representer les 8 fils contenu dans notre cable
    byte cableOrangeBlanc_;
    byte cableOrange_;
    byte cableVertBlanc_;
    byte cableVert_;
    byte cableBleuBlanc_;
    byte cableBleu_;
    byte cableBrunBlanc_;
    byte cableBrun_;

    // Declaration de methode
    Cable(); // Notre constructeur
   
   
    void envoieDesignal(byte pin, int signal);     // Declaration de la methode qui va verifier si les fils du cable vont lire ou envoyer la tension
    void modeDuCable1(); // Declaration de la methode qui va ;
  
};

#endif