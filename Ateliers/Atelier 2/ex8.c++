#include <iostream>
#include <string>
using namespace std;
class Voiture{
    public:
    string marque;
    string modele;
    int anne;
    float kilometrage;
    float vitesse;
    Voiture(){
        marque = "mercedes";
        modele = "class G";
        anne = 2020;
        kilometrage = 200000;
        vitesse = 250;
    }
};

int main(){
    Voiture car1 , car2;
    car1.marque = "mercedes";
    car1.modele = "class G";
    car1.anne = 2020;
    car1.kilometrage = 200000;
    car1.vitesse = 250;
    car2 = {"dacia", "duster", 2018, 5000, 180};

    cout << car1.marque  <<" : " << car1.modele << " : " << car1.anne << " : " << car1.kilometrage << " : " << car1.vitesse << endl;
    cout << car2.marque  <<" : " << car2.modele << " : " << car2.anne << " : " << car2.kilometrage << " : " << car2.vitesse << endl;



    return 0;
}