#include <iostream>
using namespace std;


class myPile{
    private :
    int sommet ;
    int taille ;
    int *pile;
    public:

    // Constructeur
    myPile():sommet(0), taille (50){
        pile = new int[taille];//allocation dynamique de la taille du pile entrer par l'utilisateur
    }

    ~myPile(){//le destructeur
        delete[] pile;
    }


    myPile(int t):taille (t), sommet(0){}

    bool estVide() const {
        return sommet == 0;
    }

    bool estPleine () const {
        return sommet == taille;
    }

    void Empiler(int v){
        if(!estPleine()) pile[sommet++] = v;

}

    int Depiler(){
        if(!estVide()) return pile[--sommet];

}

};

int main(){
    int n;
    cout <<"entrer la taille de la pile : ";
    cin >> n;
    myPile P1(n);

    int v;

    while(!P1.estPleine()){
        cout << "entrer la valeur : ";
        cin >> v;
        P1.Empiler(v);
    }
    while(!P1.estVide()){
        cout<<P1.Depiler()<<endl;
    }
    return 0;
}
