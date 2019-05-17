#include <cstdlib>
#include <iostream>
#include <string.h>
#include <memory.h>
#define Nombre_de_notes 10
using namespace std;

char Les_Valeurs[10];


void Affiche_valeurs(){
    int L_compteur=0;
    while(L_compteur<Nombre_de_notes){  
        cout<<"Case no "<<L_compteur+1<<" : "<<Les_Valeurs[L_compteur]<<endl;
        L_compteur++;
        }
       
}
void Affiche_tableau_0(){
    int L_compteur=0;
    while(Les_Valeurs[L_compteur]!=0){  
        cout<<"Case no "<<L_compteur<<" : "<<Les_Valeurs[L_compteur]<<endl;
        L_compteur++;
     
    }
       
}

int Saisir_Valeurs(){
    int compteur=0;
    cout<<"Veuillez entrer "<<Nombre_de_notes<<" notes"<<endl;
    for(compteur=0;compteur<Nombre_de_notes;compteur++){
        do{
            cout<<"note no  "<<compteur+1<<" : "<<endl;
            cin>>Les_Valeurs[compteur];
            if(Les_Valeurs[compteur]<0){ 
                cout<<"Erreur"<<endl;
            }
        }while(Les_Valeurs[compteur]<0);
    }
}

void Affiche_jusqua_0(){
    int L_index=0;
    while(Les_Valeurs[L_index]!=0){
        cout<<Les_Valeurs[L_index]<<", ";
        L_index++;
    }
    cout<<endl;
}


int main(int argc, char** argv) {
    
    memset(Les_Valeurs,65,10);
    memset(Les_Valeurs,66,4);
    gets(Les_Valeurs); //injection de code
    fgets(Les_Valeurs,19,stdin);//bon code
    return 0;
}