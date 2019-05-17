#include <cstdlib>
#include <iostream>
#define Nombre_de_notes 5
using namespace std;

//******************************************************************************
float tableau[20];
//******************************************************************************
void Count_0(){
    int L_compteur=0;
    int L_nb_zero=0;
    for(L_compteur=0;L_compteur<Nombre_de_notes;L_compteur++){
        if(tableau[L_compteur]==0){
            L_nb_zero++;
        }
    }
    cout<<"Il ya "<<L_nb_zero<<" zero dans le tableau"<<endl;
}

void Max_Min(){
    float L_max=0,L_min=0;
    int L_compteur=0;
    for(L_compteur=0;L_compteur<Nombre_de_notes;L_compteur++){
        if(tableau[L_compteur]>L_max){
            L_max=tableau[L_compteur];
        }
        else if(tableau[L_compteur]<L_min){
            L_min=tableau[L_compteur];
        }
    }
    cout<<"La valeur max est : "<<L_max<<endl;
    cout<<"La valeur min est : "<<L_min<<endl;

}

void Saisir_Valeurs(){
    int compteur=0;
    cout<<"Veuillez entrer "<<Nombre_de_notes<<" notes"<<endl;
    for(compteur=0;compteur<Nombre_de_notes;compteur++){
        do{
            cout<<"note no  "<<compteur+1<<" : "<<endl;
            cin>>tableau[compteur];
            if(tableau[compteur]<0){ 
                cout<<"Erreur"<<endl;
            }
        }while(tableau[compteur]<0);
    }
}

float Calcul(float P_moyenne){
        
    float somme=0;
    int L_compteur=0;
    for(L_compteur=0;L_compteur<Nombre_de_notes-1;L_compteur++){
           
        somme+=tableau[L_compteur];

    }
    P_moyenne=somme/L_compteur;
    return P_moyenne;
    
}

void Afficher_Resultat(float P_moyenne){
    cout<<"Moyenne = "<<P_moyenne<<endl;
}

int main(int argc, char** argv) {
    float L_Moyenne=0;
    Saisir_Valeurs();
    Count_0();
    return 0;

}