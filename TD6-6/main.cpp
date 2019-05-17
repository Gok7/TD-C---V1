#include <cstdlib>
#include <iostream>
#define Nombre_de_notes 20

using namespace std;

float Saisir_Valeurs(){
    float L_Somme = 0;
    float L_Valeur_entree = 0;
    int L_nb_Valeur=1;
    cout<<"Bonjour, veuillez entrez 20 notes, appuyez sur echap pour terminer "<<endl;
    do{
       cout<<"Valeur no "<<L_nb_Valeur<<" : ";
       cin>>L_Valeur_entree;
       
       L_Somme+=L_Valeur_entree;
       L_nb_Valeur++;
       L_Valeur_entree=0;
    }while(L_nb_Valeur<Nombre_de_notes+1);
    return L_Somme;
}

float Calcul(float P_Somme){
    float L_moyenne=0;
    L_moyenne=P_Somme/Nombre_de_notes;
    return L_moyenne;
}

void Afficher_Resultat(float P_moyenne){
    
    cout<<"Moyenne = "<<P_moyenne<<endl;
}

int main(int argc, char** argv) {
    float L_moy=0,L_somme=0;
    L_somme=Saisir_Valeurs();
    L_moy=Calcul(L_somme);
    Afficher_Resultat(L_moy);
    return 0;

}