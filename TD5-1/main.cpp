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
int Valeur_1;

// Valeur_2 est un entier;
int Valeur_2;

// Somme est un entier long;
long int Somme;

// Produit est un entier long;
long int Produit;

//******************************************************************************
void Saisir_Valeurs() 
{
    //AFFICHE("Veuillez entrer une valeur s'il vous plait :")
    cout<<"Veuillez entrer une valeur s'il vous plait:";
   
    //LIRE(Valeur_1)
    cin>>Valeur_1;
    
    //AFFICHE("Veuillez entrer une deuxieme valeur !!!!!:")
    cout<<"Veuillez entrer une deuxieme valeur :";
    
    //LIRE(Valeur_2)
    cin>>Valeur_2;
}
//=============================================================================
void Calcul()
{
    Somme   = Valeur_1 + Valeur_2;
    Produit = Valeur_1 * Valeur_2;
    
}
//=============================================================================
void Afficher_Resultat()
{
    cout<<"La somme est "<<Somme<<endl;
    cout<<"Le produit est "<<Produit<<endl;
    
}
//=============================================================================

int main(int argc, char** argv) 
{
    Saisir_Valeurs();
    Calcul();
    Afficher_Resultat();
    return 0;
}

