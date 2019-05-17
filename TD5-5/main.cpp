
#include <cstdlib>
#include <iostream>

using namespace std;

//******************************************************************************
long int Factorielle;
long int Delta = 1;
long int Valeur_entree;

//******************************************************************************

void Saisir_Valeurs(){
    do {
        cout << "Veuillez entrer une Entre 0 et 100: " << endl;
        cin >> Valeur_entree;
        if(Valeur_entree < 0 || Valeur_entree > 100){
                    cout << "ERREUR" << endl;
        }
    } while (Valeur_entree < 0 || Valeur_entree > 100);
}

void Calcul() {
    Factorielle=1;
    Delta=Valeur_entree;
    while(Delta>1){
        Factorielle=Factorielle*Delta;
        Delta--;
    }
}

void     Afficher_Resultat(){
    cout<<"Valeur entree: "<<Valeur_entree<<endl<<"Factorielle = "<<Factorielle<<endl;
}

int main(int argc, char** argv) {
    Saisir_Valeurs();
    Calcul();
    Afficher_Resultat();
    return 0;

}