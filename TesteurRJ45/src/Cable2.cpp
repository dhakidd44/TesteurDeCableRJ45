/*
  Titre      : Testeur de cable RJ45
  Auteur     : Ernest Samuel Andre
  Date       : 15/02/2023
  Description: Le but de ce prohramme est de tester un cable RJ45 pour voir s'il est droit ou croisé
  Version    : 0.0.1
*/
#include "Cable2.hpp"



// Definition des methodes par convention on commence avec le constructeur
Cable2::Cable2()
{
    cableOrangeBlanc_2 = 7;
    cableOrange_2 = 8;
    cableVertBlanc_2 = 9;
    cableBleu_2 =10;
    cableBleuBlanc_2 = 11;
    cableVert_2 = 12;
    cableBrunBlanc_2 = 13;
    cableBrun_2 = 14;
};
// definition d'entree pour la partie slave du testeur
void Cable2::modeDuCable2()
{
    pinMode(cableOrangeBlanc_2, INPUT);
    pinMode(cableOrange_2, INPUT);
    pinMode(cableVertBlanc_2, INPUT);
    pinMode(cableVert_2, INPUT);
    pinMode(cableBleuBlanc_2, INPUT);
    pinMode(cableBleu_2, INPUT);
    pinMode(cableBrunBlanc_2, INPUT);
    pinMode(cableBrun_2, INPUT);

    
};
