#include <cstdlib>
#include <iostream>
#define Nb_valeur 2
using namespace std;

float tableau_X[Nb_valeur];
float tableau_Y[Nb_valeur];

void initialisation(){
    int compteur=0;                        
    for(compteur=0;compteur<Nb_valeur;compteur++){
        tableau_X[compteur]=0;
        tableau_Y[compteur]=0;
    }
}

void Saisir_Valeur(){
    int compteur=0;
    cout<<"Veuillez saisir les coordonnees x et y de chaque points"<<endl;
    for(compteur=0;compteur<Nb_valeur;compteur++){
        wcout<<L"Point numéro : "<<compteur+1<<endl;
        cout<<"X : ";
        cin>>tableau_X[compteur];
        cout<<"Y : ";
        cin>>tableau_Y[compteur];
    }
}

void Affiche_tableau(){
    int compteur=0;
    cout<<"Les points saisi : "<<endl;
    for(compteur=0;compteur<Nb_valeur;compteur++){
        cout<<"X : "<<tableau_X[compteur]<<"  Y : "<<tableau_Y[compteur]<<endl;
    }
    
}

void tri_max_min(){
    int compteur=0;
    float Y_max=0,Y_min=0,X_max=0,X_min=0;
    typedef struct {
        float X,Y;
    } T_point;
    
    T_point A;
    T_point B;
    
    A.X=tableau_X[0];
    A.Y=tableau_Y[0];
    
    for(compteur=0;compteur<Nb_valeur;compteur++){
        if(tableau_X[compteur]>X_max){
            X_max=tableau_X[compteur];
        }
        if(tableau_X[compteur]<X_min){
            X_min=tableau_X[compteur];
        }
        if(tableau_Y[compteur]>Y_max){
            Y_max=tableau_X[compteur];
        }
        if(tableau_Y[compteur]<Y_min){
            Y_min=tableau_X[compteur];
        }
    }
    A.X=X_min;
    A.Y=Y_min;
    B.X=X_max;
    B.Y=Y_max;
    cout<<"Point A : "<<A.X<<"  "<<A.Y<<endl;
    cout<<"Point B : "<<B.X<<"  "<<B.Y<<endl;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "");
    initialisation();
    Saisir_Valeur();
    tri_max_min();
    return 0;
}