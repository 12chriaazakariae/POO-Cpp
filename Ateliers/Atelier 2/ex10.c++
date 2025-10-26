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
    Complexe c1, c2;

    cout << "Entrez le premier nombre complexe : " << endl;
    c1.saisir();
    cout << "Entrez le deuxieme nombre complexe : " << endl;
    c2.saisir();


}