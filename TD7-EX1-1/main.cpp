
#include <cstdlib>
#include <iostream>

using namespace std;

float diviseur=2;
int nb_saut=0;
float distance_du_saut=0;
float distance_totale=0;

float Saut(float P_longeur_saut, int nb_saut) {

    if (distance_du_saut > 0.001) {
        distance_du_saut = P_longeur_saut / diviseur;
        distance_totale = distance_du_saut;
        diviseur += 2;
        nb_saut++;
        cout << "nb saut : " << nb_saut << endl;
        cout << "distance parcouru : " << distance_totale << endl;
    } else {
        Saut(P_longeur_saut, P_longeur_du_lac);

    }
    
}

int fonction1(int P_n){
    if(P_n<=0) return 1;
    else    return fonction1(P_n-1)*2;
}
int fonction2(int P_n){
    if(P_n<=0) return 1;
    else    return fonction1(P_n-1)*P_n;
}

int fonction3(int P_n){
    int L_resultat;
    switch(P_n){
        case 0:L_resultat=1;
        break;
        case 1:L_resultat=1;
        break;
        default:L_resultat=fonction3(P_n-1)+fonction3(P_n-2);
    }
    return L_resultat;
}


int main(int argc, char** argv) {
    Saut(1,3);
    return 0;
}