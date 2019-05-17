#include <cstdlib>//GetTickCount();  #ifdef ----- #endif 
#include <iostream>/*additional option -W1,--stack,16777216*/
#include <windows.h>
#define Nb_valeur 10000L
using namespace std;

//define BENCH

/*#ifdef BENCH
DWORD temps_base;
#endif*/
int tableau[Nb_valeur];

void Saisi() {
    int L_compteur;
    cout << "Veuillez saisir des valeurs : " << endl;
    for (L_compteur = 0; L_compteur < Nb_valeur; L_compteur++) {
        cout << "valeur no " << L_compteur << " : ";
        cin >> tableau[L_compteur];
    }
    cout << endl;
}

void tri_a_bulle_decroissant() {

    int compteur, tempo, fin = 1, L_temp_debut, L_temp_fin, L_temp_total;
    compteur = 0, tempo = 0;
    L_temp_debut = GetTickCount();
    while (fin != 0) {
        fin = 0;
        for (compteur = 0; compteur < Nb_valeur - 1; compteur++) {
            if (tableau[compteur] > tableau[compteur + 1]) {
                tempo = tableau[compteur];
                tableau[compteur] = tableau[compteur + 1];
                tableau[compteur + 1] = tempo;
                fin = 1;
            }
        }
    }
    L_temp_fin = GetTickCount();
    L_temp_total = L_temp_fin - L_temp_debut;
    cout << "Tri a bulle ordre decroissant : " << endl;
    cout << "Temp total : " << L_temp_total << endl;
    cout << endl << endl;
}

void tri_a_bulle_croissant() {
    int L_compteur, L_tempo, fin = 1, temp_debut, temp_fin, temp_total;
    L_compteur = 0, L_tempo = 0;
    temp_debut = GetTickCount();
    while (fin != 0) {
        fin = 0;
        for (L_compteur = 0; L_compteur < Nb_valeur - 1; L_compteur++) {
            if (tableau[L_compteur] < tableau[L_compteur + 1]) {
                L_tempo = tableau[L_compteur];
                tableau[L_compteur] = tableau[L_compteur + 1];
                tableau[L_compteur + 1] = L_tempo;
                fin = 1;
            }
        }
    }
    temp_fin = GetTickCount();
    temp_total = temp_fin - temp_debut;
    cout << "Tri a bulle ordre croissant : " << endl;
    cout << "Temp total : " << temp_total << endl;
    cout << endl << endl;
}

int main(int argc, char** argv) {
    
    for (int compteur1 = Nb_valeur; compteur1 >= 0; compteur1--) {
        tableau[compteur1]=compteur1;
    }
    tri_a_bulle_croissant();
    return 0;
}
