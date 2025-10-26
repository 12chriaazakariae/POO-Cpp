#include <iostream>
#include <string>
using namespace std;

class Complexe{
    private:
        float re;
        float im;
    public:
        Complexe (){
            re =0;
            im =0;
        }
        Complexe(float r, float i){//Complexe(reeelle , Imaginaire)
            re =r;
            im =i;
        }
        void saisir(){
            cout << "la partie reelle du nombre : " ;
            cin >> re ;
            cout << "la partie imaginaire du nombre : " ;
            cin >> im ;

        }
        void afficher(){
            cout << re <<" + "<<im<<endl;
        }
        Complexe addition(const Complexe& c){
            return Complexe(re + c.re, im + c.im);
        }
        Complexe soustraction(const Complexe& c){
            return Complexe(re - c.re, im - c.im);
        }
        Complexe multiplication(const Complexe& c)  {
            return Complexe(re * c.re - im * c.im, re * c.im + im * c.re);
    }
};
int main(){
    Complexe c1, c2,resultat;
    int choix;

    cout << "Entrez le premier nombre complexe : " << endl;
    c1.saisir();
    cout << "Entrez le deuxieme nombre complexe : " << endl;
    c2.saisir();

    cout << "\n===== Menu =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Soustraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Egalite" << endl;
    cout << "================" << endl;
    cout << "Choix : ";
    cin >> choix;

    cout << "\nRésultat : ";

    switch (choix) {
        case 1:
            resultat = c1.addition(c2);
            resultat.afficher();
            break;
        case 2:
            resultat = c1.soustraction(c2);
            resultat.afficher();
            break;
        case 3:
            resultat = c1.multiplication(c2);
            resultat.afficher();
            break;
        default:
            cout << "Choix invalide !" << endl;
    }


}