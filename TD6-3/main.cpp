
#include <cstdlib>
#include <iostream>


using namespace std;

int Saisir_valeur() {//produit
    int L_nb_etoile = 0;
    cout << "Veuillez entrer le nombre d'etoile \n" << endl;
    cin >> L_nb_etoile;
    cout << endl;
    return L_nb_etoile;
}

void Affichage_Ligne(int P_etoile) {//consomme
    int L_compteur = 0;
    for (L_compteur = P_etoile; L_compteur != 0; L_compteur--) {
        cout << "*";
    }
}

void Affichage(int P_nb_etoile) {//consomme
    for (P_nb_etoile; P_nb_etoile > 0; P_nb_etoile--) {
        Affichage_Ligne(P_nb_etoile);
        cout << endl;
    }

}

int main(int argc, char** argv) {
    int L_etoile = 0;
    L_etoile = Saisir_valeur();
    Affichage(L_etoile);
    cout << endl;
    return 0;
}