
#include <cstdlib>
#include <iostream>

using namespace std;

int Saisir_valeur(){
    int L_nb_Valeur=0;
    cout<<"Veuillez entrer le nombre de valeur souhaite"<<endl;
    cin>>L_nb_Valeur;
    return L_nb_Valeur;
}

int MAX(int P_valeur1,int P_valeur2){
    int L_var_max=0;
    if(P_valeur1>P_valeur2){
        L_var_max=P_valeur1;
    }
    else {
        L_var_max=P_valeur2;
    }
    return L_var_max;
}

int MIN(int P_valeur1,int P_valeur2){
    int L_var_min=0;
    if(P_valeur1>P_valeur2){
        L_var_min=P_valeur2;
    }
    else {
        L_var_min=P_valeur1;
    }
    return L_var_min;
}

void Affichage(int P_max,int P_min){
    if(P_max!=P_min){
        cout<<"La valeur max est : "<<P_max<<endl;
        cout<<"La valeur min est : "<<P_min<<endl;
    }
    else {
        cout<<"Les deux valeurs sont egales"<<endl;
    }
}

int main(int argc, char** argv) {
    int L_max,L_min,L_valeur1=0,L_valeur2=0;

    L_max=MAX(L_valeur1,L_valeur2);
    L_min=MIN(L_valeur1,L_valeur2);
    Affichage(L_max,L_min);
    return 0;

}