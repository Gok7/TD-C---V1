
#include <cstdlib>
#include <iostream>

using namespace std;

int Valeur_Max=0,Valeur_Min=65000,var_entree;
    int L_nb_valeur=0,compteur=1; 

void Saisir_Valeur(){

    cout<<"Veuillez entrer le nombre de valeur souhaite"<<endl;
    cin>>L_nb_valeur;
    while(L_nb_valeur>0){
        cout<<"Valeur no "<<compteur<<endl;
        cin>>var_entree;

        if(var_entree>Valeur_Max){
            Valeur_Max=var_entree;
        }
        if(var_entree<Valeur_Min){
            Valeur_Min=var_entree;
        }
        compteur++;
        L_nb_valeur--;
    }
}

void Afficher(){
    cout<<"Valeur min = "<<Valeur_Min<<" Valeur Max = "<<Valeur_Max<<endl;
}


int main(int argc, char** argv) {
    Saisir_Valeur();
    Afficher();
    return 0;
}
