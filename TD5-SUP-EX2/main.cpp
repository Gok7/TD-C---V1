
#include <cstdlib>
#include <iostream>
#include <windows.h>
#define temps 1500

using namespace std;


int nb_etoile=0;


void Saisir_valeur(){
    cout<<"Veuillez entrer le nombre d'etoile \n"<<endl;
    cin>>nb_etoile;
    cout<<endl;
}

void Affichage_Ligne(){
    int L_compteur=0;
    for(L_compteur=nb_etoile;L_compteur!=0;L_compteur--){
        cout<<"*";
    }
}

void Affichage(){
    for(nb_etoile;nb_etoile>0;nb_etoile--){
       Affichage_Ligne();
       cout<<endl;
    }
    
}

int main(int argc, char** argv){
    Saisir_valeur();
    Affichage();
    cout<<endl;
    return 0;
}