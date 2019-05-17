#include <cstdlib>
#include <iostream>
#define Nombre_de_notes 5
using namespace std;

//******************************************************************************
float tableau[20];
//*****************************************************************************

void Affiche_tableau_0() {
    int L_compteur = 0;
    while (tableau[L_compteur] != 0) {
        cout << "Case no " << L_compteur << " : " << tableau[L_compteur] << endl;
        L_compteur++;
    }
}

int Saisir_Valeurs() {
    int compteur = 0;
    int L_nb_occurence = 0; //pour ex3sup
    //cout<<"Veuillez entrer le nombre d'occurence : "<<endl;
    //cin>>L_nb_occurence;
    cout << "Veuillez entrer " << Nombre_de_notes << " notes" << endl;
    for (compteur = 0; compteur < Nombre_de_notes; compteur++) {
        do {
            cout << "note no  " << compteur + 1 << " : " << endl;
            cin >> tableau[compteur];
            if (tableau[compteur] < 0) {
                cout << "Erreur" << endl;
            }
        } while (tableau[compteur] < 0);
    }
    return L_nb_occurence;
}

int main(int argc, char** argv) {
    Saisir_Valeurs();
    Affiche_tableau_0();
    return 0;

}