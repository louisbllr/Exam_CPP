// JV1A_BELLIERE_LOUIS 2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
using namespace std;
int choice;
int player;
int endurance;
endurance = 100;
int camp;
int repos;

class Lieux {
protected:
    string name;
    int difficulter;
    int accés;

public:
    Lieux(string n, int a, int d, int a) {
    name = n;
    difficulter = d;
    accés = a;


    }
   
};

int main()
{
    std::cout << "Hello World!\n";
    Lieux = "Maison", 1, 3;
    Lieux = "Route", 3, 1;
        
    int lieu1;
    3 = lieu1;
    lieu1 difficulter = 3;
    int lieu2;
    5 = lieu2;
    lieu2 difficulter = 5;
    int lieu3;
    9 =lieu3;
    lieu3 difficulter = 9;
    int lieu4;
    4 = lieu4;
    lieu4 difficulter = 0;



    cout << "Choisir une déstination.";
    cout << "3";
    cout << "4";
    cout << "5";
    cout << "9";

    cin >> choice;
    lieujoueur = choice;

    if (choice == 3) {
        player = lieu1;
        endurance - 3 - lieujoueur;
        cout << "Vous arrivez dans une zone de danger 3";
    }
    else if (choice == 5) {
        player = lieu2;
        endurance - 5 -lieujoueur;
        cout << "Vous arrivez dans une zone de danger 5";
    }
    else if (choice == 9) {
        player = lieu3;
        endurance - 9 -lieujoueur;
        cout << "Vous arrivez dans une zone de danger 9 attention ça commence a chauffer";
        if (camp = true) {
            cout << "Il y a un campement dans ce lieu.\n";
        else if (camp = false) {
            if cin >> "établir un campement"; 
                camp = true & difficulter = 4.5;
            endurance - 4.5 - lieujoueur;
            if (cin >> repos;) {
                endurance = endurance + 50
                    if (endurance > 100; endurance = 100);
                    else endurance = endurance;
            }
               
        }
        }

    }
    else if (choice == 4) {
        player = lieu4;
        endurance - 0 - lieujoueur +50;
        if endurance > 100 endurance = 100;
        else endurance = endurance;

    }
    choice1 = 0;
    choice2 = 0;
    choice3 = 0;
    choice4 = 0;
    choice5 = 0;



    cout << choice\n;
   // cout << choice len;
    choise1 = choise
        if choise1 != 0; choise 2 = choice;
            if choice2 != 0; choice 3 = choice;
            if choice3 != 0; choice 4 = choice;
            if choice4 != 0; choice 5 = choice;

    
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
