
#include <cstdlib>
#include <iostream>
#include <windows.h>
#define TEMPS 1000
#define VALEUR_MAX 5
using namespace std;

int Valeur_paire=0,Valeur_impaire=0;

void Blabla();
void Saisir_valeur();
void Affichage();

int main(int argc, char** argv){
    Saisir_valeur();
    Affichage();

    return 0;
}

void Blabla(){
    cout<<"\n Veuillez Entrez un nombre superieur a 0";
    Sleep(TEMPS);
    cout<<"\r Sinon ca sert a rien d'utiliser ce programme";
    Sleep(TEMPS);
    cout<<"\r Pas vrai?                                         ";
    Sleep(TEMPS);
    cout<<"\r                                                          ";
    cout<<endl;
}

void Saisir_valeur(){
    
    int L_nb_entre=0,L_resultat=0,L_nb_valeur=0;
    
    do{
        cout<<"Veuillez entrer "<<VALEUR_MAX-L_nb_valeur<<" valeurs"<<endl;
        cin>>L_nb_entre;
        if (L_nb_entre<=0){
            Blabla();
        }
        L_resultat=L_nb_entre%2;
        L_nb_valeur++;
        if(L_resultat==0){
            Valeur_paire++;
        }
        else{
            Valeur_impaire++;
        }
        
    }while(L_nb_valeur<VALEUR_MAX);
}


void Affichage(){
    cout<<"Il y a "<<Valeur_paire<<" valeurs paires et "<<Valeur_impaire<<" valeurs impaires \n"<<endl;
}
