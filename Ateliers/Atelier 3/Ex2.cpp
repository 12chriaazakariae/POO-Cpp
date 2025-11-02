#include <iostream>
#include <fstream>
using namespace std;

class Fichier{
    private:
        char* Ptr;
        int longueur;
    public:
    //constructeur
    Fichier():longueur(15) , Ptr(nullptr){};//utilise nullptr mieux que NULL
    Fichier(int l):longueur(l) , Ptr(nullptr){};//utilise nullptr mieux que NULL
    //destructeur
    ~Fichier(){//on peut faire un 'if' pour verifier si le "Ptr != nullptr" mais si: "delete [] nullptr" n'est pas un probleme
        delete [] Ptr;
    }

    void Creation(){
        Ptr = new char[longueur];
    }
    void Remplir(){
        if(Ptr == nullptr){ cout << "Probleme!!" ;
            return ; }   //ou exit(1);
        for(int i =0; i< longueur; i++){
            *(Ptr+i) = 'A';//Ptr[i] = 'A';
        }
    }
    void Affiche(){
        if(Ptr == nullptr){ cout << "Probleme!!" ;
            return ; }   //ou exit(1);

        for (int i = 0; i <longueur;i++){
            cout << Ptr[i];
        }
        cout <<endl;
    }
};

int main(){
    Fichier f1(55);
    f1.Creation();
    f1.Remplir();
    f1.Affiche();

    return 0 ;

}