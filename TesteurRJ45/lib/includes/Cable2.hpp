/*
  Titre      : Testeur de cable RJ45
  Auteur     : Ernest Samuel Andre
  Date       : 15/02/2023
  Description: Le but de ce prohramme est de tester un cable RJ45 pour voir s'il est droit ou croisé
  Version    : 0.0.1
*/

#include <iostream>
#include <Arduino.h>

#ifndef VERBOSE
#define VERBOSE

class Cable2 // Classe pour notre cable
{
private:
  /* data */
public:
  // Attributs qui va representer les 8 fils contenu dans notre cable
  byte cableOrangeBlanc_2;
  byte cableOrange_2;
  byte cableVertBlanc_2;
  byte cableVert_2;
  byte cableBleuBlanc_2;
  byte cableBleu_2;
  byte cableBrunBlanc_2;
  byte cableBrun_2;

  // Declaration de methode
  Cable2(); // Notre constructeur
  // Declarationd de la methode qui va verifier si les fils du cable vont lire ou envoyer la tension
  void modeDuCable2();
};

#endif