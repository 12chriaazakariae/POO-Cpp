#include <iostream>
#include "ex1.h"
using namespace std;


int main() {
    cout << "=== Bienvenue dans la Mediatheque ===" << endl << endl;
    
    Mediatheque media;
    
    Livre* livre1 = new Livre(1, "Le Petit Prince", "Saint-Exupery", 1943, "978-123", 100);
    Livre* livre2 = new Livre(2, "1984", "Orwell", 1949, "978-456", 328);
    Magazine* mag1 = new Magazine(3, "Science et Vie", "Redaction", 2023, 2023, 150);
    Video* video1 = new Video(4, "Apprendre C++", "Prof Martin", 2022, 3600, 1080);
    Video* video2 = new Video(5, "Python Basics", "Prof Martin", 2023, 2400, 720);
    
    media.ajouter(livre1);
    media.ajouter(livre2);
    media.ajouter(mag1);
    media.ajouter(video1);
    media.ajouter(video2);
    
    cout << "\n--- Affichage de toutes les ressources ---" << endl;
    media.afficher();
    
    cout << "\n--- Test afficherInfos ---" << endl;
    livre1->afficherInfos();
    
    cout << "\n--- Test telecharger ---" << endl;
    livre1->telecharger();
    mag1->telecharger();
    video1->telecharger();
    
    cout << "\n--- Recherche par titre '1984' ---" << endl;
    media.rechercher_Titre("1984");
    
    cout << "\n--- Recherche par annee 2023 ---" << endl;
    media.rechercher_Annee(2023);
    
    cout << "\n--- Recherche auteur 'Prof Martin' en 2023 ---" << endl;
    media.rechercher("Prof Martin", 2023);
    
    cout << "\n--- Test operateur == ---" << endl;
    Livre livre3(1, "Test", "Auteur", 2020, "123", 50);
    Livre livre4(5, "Test2", "Auteur2", 2021, "456", 60);
    
    if (*livre1 == livre3) {
        cout << "livre1 et livre3 ont le meme ID" << endl;
    } else {
        cout << "livre1 et livre3 ont des IDs differents" << endl;
    }
    
    if (*livre1 == livre4) {
        cout << "livre1 et livre4 ont le meme ID" << endl;
    } else {
        cout << "livre1 et livre4 ont des IDs differents" << endl;
    }
    
    cout << "\n=== Fin du programme ===" << endl;
    
    return 0;
}
