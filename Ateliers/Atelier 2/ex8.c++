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
    Voiture(string ma, string modl , int an, float km, float vit){
        marque = ma;
        modele = modl;
        anne = an;
        kilometrage = km;
        vitesse = vit;
    }
    // la fonction acceleration
    void accelerer(float v_plus){
        vitesse += v_plus; 
    }
    // la fonction freiner
    void freiner(float v_moins){
        if(v_moins <= vitesse) vitesse -= v_moins;
        else vitesse = 0;
    }
    void afficher(){
        cout<<"marque : " <<marque<<endl; 
        cout<<"modele : " <<modele<<endl; 
        cout<<"anne : " <<anne<<endl; 
        cout<<"kilometrage : " <<kilometrage<<endl; 
        cout<<"vitesse : " <<vitesse<<endl; 
    }

    void avance(float distance){
        kilometrage += distance;
    }
};

int main(){
    Voiture car1 , car_def;
    car1.marque = "mercedes";
    car1.modele = "class G";
    car1.anne = 2020;
    car1.kilometrage = 200000;
    car1.vitesse = 250;
    Voiture car2 ("dacia", "duster", 2018, 5000, 180);

    cout << car1.marque  <<" : " << car1.modele << " : " << car1.anne << " : " << car1.kilometrage << " : " << car1.vitesse << endl;
    cout << car2.marque  <<" : " << car2.modele << " : " << car2.anne << " : " << car2.kilometrage << " : " << car2.vitesse << endl;
    cout << car_def.marque  <<" : " << car_def.modele << " : " << car_def.anne << " : " << car_def.kilometrage << " : " << car_def.vitesse << endl;

    cout << car2.vitesse <<endl;
    car2.accelerer(40);
    cout << car2.vitesse <<endl;

    cout << car1.vitesse <<endl;
    car1.freiner(251);
    cout << car1.vitesse <<endl;

    car_def.afficher();
    
    cout << car1.kilometrage <<endl;
    car1.avance(45);
    cout << car1.kilometrage <<endl;



    return 0;
}
