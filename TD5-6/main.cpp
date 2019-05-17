//ex6 td5
#include <cstdlib>
#include <iostream>
#define Nombre_de_notes 20
using namespace std;

//******************************************************************************
float Valeur = 0,Somme = 0,nb_Valeur=1;
float Moyenne=0;
//******************************************************************************

void Saisir_Valeurs(){
    cout<<"Bonjour, veuillez entrez 20 valeurs "<<endl;
    do{
       cout<<"Valeur no "<<nb_Valeur<<" : ";
       cin>>Valeur;
       Somme+=Valeur;
       nb_Valeur++;
       Valeur=0;
    }while(nb_Valeur<Nombre_de_notes+1);
}

void Calcul(){
        
    Moyenne=Somme/Nombre_de_notes;
}

void Afficher_Resultat(){
    cout<<"Moyenne = "<<Moyenne<<endl;
}

int main(int argc, char** argv) {
    Saisir_Valeurs();
    Calcul();
    Afficher_Resultat();
    return 0;

}