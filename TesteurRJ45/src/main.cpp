/*
  Titre      : Testeur de cable RJ45
  Auteur     : Ernest Samuel Andre
  Date       : 15/02/2023
  Description: Le but de ce prohramme est de tester un cable RJ45 pour voir s'il est droit ou croisé
  Version    : 0.0.1
*/
#include <Arduino.h>
#include <Cable.hpp>
#include <Cable2.hpp>

#include <iostream>
using namespace std;

// Objet qui va servir de partie d'entree pour notre testeur de cable c'est la premiere extremite
Cable Emeteur;
// Objet qui va servir de partie de sortie pour notre testeur de cable c'est la deuxieme extremite
Cable2 Recepteur;
void setup()
{
  delay(5000);
  //Demarrage de la liaison
  // Initialisation du moniteur serie
  Serial.begin(9600);
  // Initialisation l'envoie de tension aux broches de sorties
  Emeteur.modeDuCable1();

  // Initialisation de la reception de tension aux broches de sorties
  Recepteur.modeDuCable2();
}

void loop()
{

  /* Cette partie va etre pour la verification final de notre cable ca va dterminier si notr cable est
  croise ou droit, le principe est que, on va envoyer un signal dans chaque fil et sa va verifier ce signal une
  a une du cote du recepteur pour chacun des fils. Si a l'envir la premiere fil du premier extremite sela se verifie
  que le signal est arrive dans la premiere fil aussi de l'autre extremite sa rentre dans une condition pour verifier tous les autres
  fils pour savoir si c'est une cable droit. et si l'un des fils ne recoit pas de signal on va dire alors que le cable est errone qu'il ne marche pas.
  et ensuise si le signal du premier fil de l'emeteur va dans le troisieme fil de la partie  du recpeteur on rentre dans les condition encore pour
  verifier chacun des fils de la maniere qu'est contruit un cable croise. On va dire aussi si l'un des fils de la partie du rcepteur ne recoit pas de signal
  le cable est encore errone et cela veut dire qu'il ne marche plus. A noter que l'on va envoyer les signaux une a une dans les fils dans le cable*/
  analogWrite(Emeteur.cableOrangeBlanc_, 1023);
  if (digitalRead(Recepteur.cableOrangeBlanc_2) == 1)
  {
    analogWrite(Emeteur.cableOrangeBlanc_, 0);
     delay(1000);
    digitalWrite(Emeteur.cableOrange_, HIGH);
    if (digitalRead(Recepteur.cableOrange_2) == 1)
    {
      digitalWrite(Emeteur.cableOrange_, LOW);
       delay(1000);
      digitalWrite(Emeteur.cableVertBlanc_, HIGH);
      if (digitalRead(Recepteur.cableVertBlanc_2) == 1)
      {
        digitalWrite(Emeteur.cableVertBlanc_, LOW);
         delay(1000);
        digitalWrite(Emeteur.cableBleu_, HIGH);
        if (digitalRead(Recepteur.cableBleu_2) == 1)

        {
          digitalWrite(Emeteur.cableBleu_, LOW);
           delay(1000);
          digitalWrite(Emeteur.cableBleuBlanc_, HIGH);

          if (digitalRead(Recepteur.cableBleuBlanc_2) == 1)
          {
            digitalWrite(Emeteur.cableBleuBlanc_, LOW);
             delay(1000);
            digitalWrite(Emeteur.cableVert_, HIGH);

            if (digitalRead(Recepteur.cableVert_2) == 1)

            {
              digitalWrite(Emeteur.cableVert_, LOW);
               delay(1000);
              digitalWrite(Emeteur.cableBrunBlanc_, HIGH);
              if (digitalRead(Recepteur.cableBrunBlanc_2) == 1)
              {
                digitalWrite(Emeteur.cableBrunBlanc_, LOW);
                 delay(1000);
                digitalWrite(Emeteur.cableBrun_, HIGH);
                if (digitalRead(Recepteur.cableBrun_2) == 1)
                {
                  Serial.println("===== Câble droit =====");
                }
                else
                  Serial.print("===== Câble erroné =====");
              }
              else
                Serial.print("===== Câble erroné =====");
            }
            else
              Serial.print("===== Câble erroné =====");
          }
          else
          {
            Serial.println("===== Câble erroné =====");
          }
        }
        else
          Serial.print("===== Câble erroné =====");
      }
      else
      {
        Serial.println("===== Câble erroné =====");
      }
    }
    else
    {
      Serial.println("===== Câble erroné =====");
    }
  }
  else if (digitalRead(Recepteur.cableVertBlanc_2) == 1)
  {
    analogWrite(Emeteur.cableOrangeBlanc_, 0);
     delay(1000);
    digitalWrite(Emeteur.cableOrange_, HIGH);
     delay(1000);
    if (digitalRead(Recepteur.cableOrange_2) == 1)
    {
      digitalWrite(Emeteur.cableOrange_, LOW);
       delay(1000);
      digitalWrite(Emeteur.cableVertBlanc_, HIGH);
      if (digitalRead(Recepteur.cableOrangeBlanc_2) == 1)
      {
        digitalWrite(Emeteur.cableVertBlanc_, LOW);
         delay(1000);
        digitalWrite(Emeteur.cableBleu_, HIGH);
        if (digitalRead(Recepteur.cableBleu_2) == 1)

        {
          digitalWrite(Emeteur.cableBleu_, LOW);
           delay(1000);
          digitalWrite(Emeteur.cableBleuBlanc_, HIGH);

          if (digitalRead(Recepteur.cableBleuBlanc_2) == 1)
          {
            digitalWrite(Emeteur.cableBleuBlanc_, LOW);
             delay(1000);
            digitalWrite(Emeteur.cableVert_, HIGH);

            if (digitalRead(Recepteur.cableOrangeBlanc_2) == 1)

            {
              digitalWrite(Emeteur.cableVert_, LOW);
               delay(1000);
              digitalWrite(Emeteur.cableBrunBlanc_, HIGH);
              if (digitalRead(Recepteur.cableBrunBlanc_2) == 1)
              {
                digitalWrite(Emeteur.cableBrunBlanc_, LOW);
                 delay(1000);
                digitalWrite(Emeteur.cableBrun_, HIGH);
                if (digitalRead(Recepteur.cableBrun_2) == 1)
                {
                  Serial.println("===== Câble Croisé =====");
                }
                else
                  Serial.print("===== Câble erroné =====");
              }
              else
                Serial.print("===== Câble erroné =====");
            }
            else
              Serial.print("===== Câble erroné =====");
          }
          else
          {
            Serial.println("===== Câble erroné =====");
          }
        }
        else
          Serial.print("===== Câble erroné =====");
      }
      else
      {
        Serial.println("===== Câble erroné =====");
      }
    }
    else
    {
      Serial.println("===== Câble erroné =====");
    }
  }
  else
  {
    Serial.println("===== Câble erroné =====");
  }

  delay(5000);
}
