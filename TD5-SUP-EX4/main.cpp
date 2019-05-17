//Programme de conversion binaire/code gray sur 3 bits.
//a xor b = (a et ! b) ou (! a et b) 
#include <cstdlib>
#include <iostream>


using namespace std;

int binaire=0,gray=0;
int calcul=0;
void Saisir_Valeur();
void Afficher_en_code_gray();

int main(int argc, char** argv) {
    Saisir_Valeur();
    Afficher_en_code_gray();
    return 0;
}

void Saisir_Valeur(){
    
    cout<<"Veuillez entrer une valeur binaire"<<endl;
    cin>>binaire;
}

void Afficher_en_code_gray(){
    
    cout<<gray;
}

