#include <cstdlib> // Ptn=Coef1*Ptn-1+Coef2*Ptn-2
#include <iostream>

/*******************************************************************************
 * terminé le 14 nov 2012
 ******************************************************************************/
using namespace std;

int Saisi(){
    int nb_annee=-1,Point[120],Point_totale=0;
    int coef1=-1,coef2=-1;
    while(nb_annee<0 || nb_annee>120){
        cout<<"Veuillez entrez le nombre d'annee"<<endl;
        cin>>nb_annee;
        if(nb_annee<0 || nb_annee>120){
            cout<<"Erreur"<<endl;
            }
    }
    while(coef1<0){
        cout<<"Coef 1 :";
        cin>>coef1;
        if(coef1<0){
            cout<<"Erreur";
            }
    while(coef2<0){
        cout<<"Coef 2 :";
        cin>>coef2;
        if(coef2<0){
            cout<<"Erreur"<<endl;
            }
    }
        }
    for(int i=0;i<120;i++){ //init
        Point[i]=0;
    }
    Point[1]=1;
    for(int a_2=0,a_1=1,a=2;a<nb_annee;a_2++,a_1++,a++){ //a pour année, a_2 = année-2
        Point[a]=coef1*Point[a_1]+coef2*Point[a_2];
    }
    cout<<endl<<"  Annee";
    for(int i=0;i<nb_annee;i++){
        cout<<" "<<i;
    }
    
    cout<<endl<<" Points";
    for(int i=0;i<nb_annee;i++){
        cout<<" "<<Point[i];
    }
    cout<<endl;
}

int main(int argc, char** argv) {
    
    Saisi();
    return 0;
}