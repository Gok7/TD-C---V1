//Programme de conversion decimale/binaire : limité à 7 (111);
#include <cstdlib>
#include <iostream>


using namespace std;
#define limite 255

int tableau[7];
int Conversion_decimale_binaire(int P_nb_decimale);
void Affiche();
bool Vrai_ou_Faux(bool variable);

int main(int argc, char** argv) {
    Affiche();
    return 0;
}

int Conversion_decimale_binaire(int P_nb_decimale) {
    int L_i = 0;
    int L_Quotient = 0;
    int L_reste = 0;
    for (L_i = 7; P_nb_decimale > 0; L_i--) {
        L_Quotient = P_nb_decimale / 2;
        L_reste = P_nb_decimale % 2;
        tableau[L_i] = L_reste;
        P_nb_decimale = P_nb_decimale / 2;
    }
}

void Affiche() {
    bool L_bool_a = 0, L_bool_b = 0, L_bool_c = 0,L_bool_d = 0;
    bool L_bool_e = 0,L_bool_f = 0,L_bool_g = 0,L_bool_h = 0;

    for (int L_variable = 0; L_variable < limite; L_variable++) {
        Conversion_decimale_binaire(L_variable);
        cout<<L_variable<<"     ";
        Vrai_ou_Faux(L_bool_a = tableau[0]);
        Vrai_ou_Faux(L_bool_b = tableau[1]);
        Vrai_ou_Faux(L_bool_c = tableau[2]);
        Vrai_ou_Faux(L_bool_d = tableau[3]);
        Vrai_ou_Faux(L_bool_e = tableau[4]);
        Vrai_ou_Faux(L_bool_f = tableau[5]);
        Vrai_ou_Faux(L_bool_g = tableau[6]);
        Vrai_ou_Faux(L_bool_h = tableau[7]);
        cout << "\n     " << endl;

    }
    cout << "\n" << endl;
}

bool Vrai_ou_Faux(bool P_variable){
    if(P_variable){
        cout<<"1";
    }
    else 
        cout<<"0";
}
