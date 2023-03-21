// JV1A_BELLIERE_Louis.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
using namespace std;
int choice;


int main()
{
    std::cout << "Choix de route";
  //  cout << "1 ?";
  //  cout << "2 ?";
  //  cin >> choice; 

 //   if (choice == 1) {
   //     choice = "Rennes";
   // cout <<"tu es arriver a Rennes";
  //  }
//    else {
  //      choice = "Caen";
  // cout <<"tu es arriver a Caen";
    //}

    cout << "Rennes ?";
    cout << "Caen ?";
    cin >> choice;

    if (choice == Rennes) {
        choice = 1;
    }
    else if (choice == Caen) {
        choice = 2;
    }

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
