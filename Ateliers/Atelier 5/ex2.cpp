#include <iostream>
using namespace std;


class Test{
    public:
    static int tableau[10] ;
    
    static int division(int indice, int diviseur){
        if(indice >= (sizeof(tableau)/sizeof(tableau[0]))){
        throw "l'indice entrer est superieur a la taille du tableau";
        }
        if(diviseur == 0){
            throw string("la division sur 0 est impossible mathematiquement !!!");
        }
        return tableau[indice]/diviseur;
        }
};


int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;


int main() {

    int x, y;
    bool good=false;
    do{
    try{
    cout << "Entrez l'indice de l'entier a diviser: " ;
    cin >> x ;

    
    cout << "Entrez le diviseur: " ;
    cin >> y ;
    cout << "Le resultat de la division est: ";
    cout <<Test::division(x,y) << endl;
    good = true;
    }
    catch(char* probleme){
        cout <<"Erreur !!!"<<endl;
        cout <<"probleme est: " << probleme <<endl;
        
        
    }
    }while(!good);
    cout<<"Terminer!!"<<endl;
    return 0;
}