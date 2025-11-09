#include <iostream> 
#include <string>
#include "ex1.h"
using namespace std;
//==================Ressource======================
void Ressource ::afficherInfos(){
    cout<<"id : "<< id << "\ntitre : "<< titre << "\nauteur : "  << auteur
    << "\nannee : " << annee << endl;
};

void Ressource ::telecharger(){
    cout <<"je telecharge la ressource "<<titre <<endl;
}
string Ressource::getTitre(){
    return titre;
};
string Ressource::getAuteur(){
    return auteur;
};
int Ressource::getAnne(){
    return annee;
};
//==================== Livre ======================
void Livre::afficherInfos(){
    cout << "id : "<< id << "\ntitre : "<< titre << "\nauteur : "  << auteur<<
     "\nannee : " << annee << "\nisbn : "<<isbn<<"\nnombre de page :"
     <<nbre_page<< endl;
}

void Livre::telecharger(){
    cout << "le livre est telecharger!!"<<endl;
}
//====================Magazine=======================
void Magazine::afficherInfos(){
    cout << "id : "<< id << "\ntitre : "<< titre << "\nauteur : "  << auteur<<
     "\nannee : " << annee << "\nedition : "<<edition<<"\nnumero :"
     <<numero<< endl;

}

void Magazine ::telecharger(){
    cout << "Magazine est telcharger!!";
}
//=====================Video==========================
void Video::afficherInfos(){
    cout << "id : "<< id << "\ntitre : "<< titre << "\nauteur : "  << auteur<<
     "\nannee : " << annee << "\neperiod : "<<period<<"\nresolution :"
     <<resolution<< endl;
}

void Video::telecharger(){
    cout << "Video est telecharger!!"<<endl;
}

//================mediatheque==================
void Mediatheque::ajouter(Ressource *r){
        ressources.push_back(r);
        cout << "ressource ajouter\n";
    }
void Mediatheque::afficher(){
    if(ressources.empty()) cout <<"meditheque est vide";
    else{
        for(int i=0;i<ressources.size();i++){
            cout<<"Ressource ["<<i+1<<"]"<<endl;
            ressources[i]->afficherInfos();
        }
    }

}
void Mediatheque::rechercher_Annee(int annee){
    for (auto r : ressources) {
            if (r->getAnne() == annee) {
                cout << "\nRessource trouvee:" << endl;
                r->afficherInfos();
            }
        }
};
void Mediatheque::rechercher_Titre(string titre){
    for (auto r : ressources) {
            if (r->getTitre() == titre) {
                cout << "\nRessource trouvee:" << endl;
                r->afficherInfos();
            }
        }
};
void Mediatheque::rechercher(string auteur,int annee){
    for (auto r : ressources) {
            if (r->getAuteur() == auteur && r->getAnne() == annee) {
                cout << "\nRessource trouvee:" << endl;
                r->afficherInfos();
            }
        }}

bool operator==(const Ressource& r1, const Ressource& r2) {
    return r1.id == r2.id;
}
