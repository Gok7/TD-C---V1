/* 
 * File:   main.cpp
 * Author: Administrateur
 *
 * Created on 19 septembre 2012, 15:56
 */

#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

/*
 * 
 */
//******************************************************************************
// Valeur_1 est un entier;
long int Valeur_1;

// Valeur_2 est un entier;
long int Valeur_2;

// Somme est un entier long;
long int Somme;

// Produit est un entier long;
long int Produit;

//******************************************************************************

void Saisir_Valeurs() {
    do {
                  cout << "Salut !"<<endl;
                  Sleep(5000);

        cout << "Veuillez entrer une valeur superieur a 0 : ";
        cin >> Valeur_1;
        if (Valeur_1 <= 0) {
            cout << "ERREUR" << endl;
        }
    } while (!(Valeur_1 > 0));
    do {
        cout << "Veuillez entrer une 2eme valeur superieur a 0 : ";
        cin >> Valeur_2;
        if (Valeur_2 <= 0) {
            cout << "ERREUR" << endl;
        }
    } while (!(Valeur_2 > 0));

}
//=============================================================================

void Calcul() {
    Somme = Valeur_1 + Valeur_2;
    Produit = Valeur_1 * Valeur_2;

}
//=============================================================================

void Afficher_Resultat() {
    cout << "La somme est " << Somme << endl;
    cout << "Le produit est " << Produit << endl;

}
//=============================================================================

int main(int argc, char** argv) {
    Saisir_Valeurs();
    Calcul();
    Afficher_Resultat();
    return 0;
}
//=============================================================================
