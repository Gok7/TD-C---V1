/* 
 * File:   main.cpp
 * Author: Administrateur
 *
 * Created on 19 septembre 2012, 15:56
 */

#include <cstdlib>
#include <iostream>

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

long int Serie;

void Calcul_serie();
//******************************************************************************

void Saisir_Valeurs() {
    do {
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
    Calcul_serie();

}
//=============================================================================

void Afficher_Resultat() {
    cout << "La somme est " << Somme << endl;
    cout << "Le produit est " << Produit << endl;

}
//=============================================================================

void Calcul_serie() {
    int L_delta = 0;
    Serie = 0;
    L_delta = Valeur_1;
    do {
        cout << "Serie = " << Serie << endl;
        Serie = Serie + L_delta;
        L_delta = L_delta - 1;
    } while (L_delta >= 0);
}

int main(int argc, char** argv) {
    Saisir_Valeurs();
    Calcul();
    Afficher_Resultat();
    return 0;
}
//=============================================================================
/*Veuillez entrer une valeur superieur a 0 :5
Veuillez entrer une 2eme valeur superieur a 0 :1
Serie = 0   L_delta = 5
Serie = 5   L_delta = 4
Serie = 9   L_delta = 3
Serie = 12   L_delta = 2
Serie = 14   L_delta = 1
Serie = 15   L_delta = 0
La somme est 6
Le produit est 5
Press [Enter] to close the terminal ...*/