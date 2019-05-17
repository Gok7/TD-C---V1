
#include <cstdlib>
#include <iostream>
#define limite 10

using namespace std;

long int Saisir_Valeurs() {//produit
    
    long int L_Valeur_entree;
    do {
        cout << "Veuillez entrer une Entre 0 et 10: " << endl;
        cin >> L_Valeur_entree;
        if (L_Valeur_entree < 0 || L_Valeur_entree > limite) {
            cout << "ERREUR" << endl;
        }
    } while (L_Valeur_entree < 0 || L_Valeur_entree > limite);
    return L_Valeur_entree;
}

long int Calcul(long int P_valeur) {//consomme et produit
    long int L_Delta = 1;
    long int L_Factorielle;
    L_Factorielle = 1;
    L_Delta = P_valeur;
    while (L_Delta > 1) {
        L_Factorielle = L_Factorielle*L_Delta;
        L_Delta--;
    }
    return L_Factorielle;
}

void Afficher_Resultat(long int P_Factorielle, long int P_valeur_entree) {//consomme
    cout << "Valeur entree: " << P_valeur_entree << endl << "Factorielle = " << P_Factorielle << endl;
}

int main(int argc, char** argv) {
    long int L_valeur_entree = 0, L_Factorielle = 0;
    L_valeur_entree = Saisir_Valeurs();
    L_Factorielle = Calcul(L_valeur_entree);
    Afficher_Resultat(L_Factorielle, L_valeur_entree);
    return 0;

}