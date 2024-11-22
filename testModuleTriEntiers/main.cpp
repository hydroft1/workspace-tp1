/*
 Programme : testTrisTableauxEntiers
 But :  Tester les sous-programmes de la bibliothèque triTableauxEntiers
 Date de dernière modification : 18/11/2024
 Auteur : Pantxika Dagorret
 Référence : R1.01-partie2 - feuille de TD n°1 
*/


#include <iostream>
using namespace std;

/*---------------------------------------------------------------*/
/*  Déclarations des éléments et sous-programmes communs aux tests
  ---------------------------------------------------------------*/
const unsigned int TAILLE = 10;		// taille des tableaux du module

void afficher (int tab[], unsigned int lgTab);
/* But : affiche à l'écran le contenu du carré tableau de lgTab entiers */

/*---------------------------------------------------------*/
/*  Déclarations des sous-programmes servant à faire les tests
  ---------------------------------------------------------*/
void testTriBulle_entiers();
// test du sous-programme triBulle() du module

/*-------------------------*/
/* MAIN
---------------------------*/
int main()
{
    testTriBulle_entiers();
    return 0;
}

/*  ---------------------------------------------------*/
 /* Corps des sous-programmes servant à faire les tests
  -----------------------------------------------------*/

  void testTriBulle_entiers()
{
   const unsigned int TAILLE = 10 ;

   int tableau1 [TAILLE] = {7, -6, 8, 10, 2, -3, 6, 9, 0, 2}; // non trié au hasard
   int tableau2 [TAILLE] = {-6, -3, 0, 2, 2, 6, 7, 8, 9, 10}; // déjà trié croissant
   int tableau3 [TAILLE] = {10, 9, 8, 7, 6, 2, 1, 0, -3, -6}; // trié à l'envers, sans doublons (= décroissant)
   int tableau4 [TAILLE] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8};    // constant

   cout << " ------------------   TRI BULLE croissant - tableau d'ENTIERS --------------" << endl << endl;

    // ---------tableau 1
    // afficher tableau avant le tri
    cout << "Avant tri BULLE croissant, tableau = ";
    afficher (tableau1, TAILLE);

    // tableau, TAILLE >> triBulle >> tableau
    //  triBulle(tableau1, TAILLE) ;                      /**A DECOMMENTER**/

    // afficher tableau après le tri
    cout << "Apres tri BULLE croissant, tableau = " ;
    afficher (tableau1, TAILLE);
    cout << endl;
}

/*=========================================================================================
  PRIMITIVES d'ENTREE / SORTIE
  =========================================================================================*/
   void afficher (int tab[], unsigned int lgTab)
   {
        if (lgTab > 0)
        {
            cout << "{";
            for (unsigned short int i = 0; i<lgTab-1; i++)
            {
                cout << tab[i] << ", " ;

            };
            cout << tab[lgTab-1] << "} "<< endl;
        }
        else
        {
            cout << "tableau vide " << endl;
        }
  }