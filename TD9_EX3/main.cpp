#include <cstdlib>
#include <iostream>
#define Nb_valeur 20
#define test
using namespace std;


void Init();
int Introduction_texte();
void Affiche_texte();
void Menu();
void traitement_choix(int P_choix);
int Saisir_choix();
void Symetrie();
void Rotation_Droite();

char Texte[Nb_valeur];
int Taille_texte = 0;

void Init() {
    int L_compteur = 0;
    for (L_compteur = 0; L_compteur < Taille_texte; L_compteur++) {
        Texte[L_compteur] = ' ';
    }
#ifdef test
    cout << "Init OK" << endl;
#endif test
}

int Introduction_texte() {
    Taille_texte = 0;
    char L_input = 0;
    Init();
    wcout << L"Veuillez saisir des caractères, ""*"" pour arrêter la saisi :" << endl;
    do {
        cin >> L_input;
        if (L_input != '*') {
            Texte[Taille_texte] = L_input;
            Taille_texte++;
        }

    } while (L_input != '*' || Taille_texte >= 20);
#ifdef test
    cout << "introduction texte OK" << endl;
#endif

}

void Affiche_texte() {
    int L_compteur = 0;
    cout << endl;
    for (L_compteur = 0; L_compteur < Taille_texte; L_compteur++) {
        cout << Texte[L_compteur];
    }
#ifdef test
    cout << "affiche texte OK" << endl;
#endif test
}

void Menu() {

    wcout << L"\n1)Introduction de données\n"
            "2)Symétrie.\n"
            "3)Rotation à droite.\n"
            "4)Rotation à gauche.\n"
            "5)FIN\n" << endl;
#ifdef test
    cout << "Menu OK" << endl;
#endif test

}

void traitement_choix(int P_choix) {
    switch (P_choix) {
        case 1:
            Introduction_texte();
            break;
        case 2: if (Taille_texte != 0) {
                Symetrie();
                Affiche_texte();
            }
            break;
        case 5: cout << "Fin du programme..." << endl;
            break;
        default: cout << "Erreur" << endl;
    }
#ifdef test
    cout << "traitement choix OK" << endl;
#endif test
}

int Saisir_choix() {

    int LE_choix = 0;
    while (LE_choix < 1 || LE_choix > 5) {
        cout << "Veuillez faire votre choix : ";
        cin >> LE_choix;
        if (LE_choix < 1 || LE_choix > 5) {
            cout << "Erreur" << endl;
        }
    }
#ifdef test
    cout << "saisir choix OK" << endl;
#endif test
    return LE_choix;
}

void Symetrie() {
    char temporaire;
    for (int L_index_gauche = 0, L_index_droite = Taille_texte-1; L_index_gauche != L_index_droite; L_index_gauche++, L_index_droite--) {
        temporaire = Texte[L_index_gauche]; //etape 1
        Texte[L_index_gauche] = Texte[L_index_droite]; //etape 2
        Texte[L_index_droite] = temporaire; //etape 3
    }
#ifdef test
    cout << "symetrie OK" << endl;
#endif test
}

void Rotation_Droite() {// a revoir
    int L_index = 0;
    char L_temporaire = 0;
    for (L_index = Taille_texte - 1; L_index >= 0; L_index--) {
        L_temporaire = Texte[Taille_texte - 1];
        Texte[L_index] = Texte[L_index - 1];
    }
    Texte[0] = L_temporaire;
#ifdef test
    cout << "rotation droite OK" << endl;
#endif test

}

int main(int argc, char** argv) {
    int L_choix = 0;
    setlocale(LC_ALL, "");
    do {
        Menu();
        L_choix = Saisir_choix();
        traitement_choix(L_choix);
    } while (L_choix != 5);
    return 0;
}
