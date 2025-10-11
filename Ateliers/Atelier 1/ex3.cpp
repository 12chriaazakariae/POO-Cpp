#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    int n=5 , p=9;
    int q;
    float x;
    //============================== 1 ===================================
    q = n<p;
    cout << "q = " << q <<endl; //=1
    // car n est inférieure à p donc true = 1 comme q est de type int 

    //============================== 2 ===================================
    q = n==p ;
    cout << "q = " << q <<endl;//=0
    // comme n est different de p donc false = 0 car q de type int

    //============================== 3 ===================================
    q = p % n + p > n;//=1
    cout << "q = " << q <<endl;
    // 9 % 5 + 9 > 5 
    // le reste de 9/5 = 4 + 9 = 13 > 5
    //true == 1 
    //============================== 4 ===================================
        x = p / n; // 1
    cout << "x = " << x <<endl;
    /*
        pourquoi 1 est pas 1.8 meme si 9/5=1.8
        car lorsque on divise deux nombre entiers le resultats est toujours un nombre entiers
        donc x = 1 et il est de type float
    */
    //============================ 5 ==================================
    x = (float) p/n ;//1.8
    cout << "x = "<< x <<endl;
    /* ici on a converti le type de p et n depuis int au float avant le calcule
    d'ou x=1.8 de type float*/ 
    //============================ 6 ==================================
    x = (p+0.5) /n; // x = 1.9
    cout << "x = " << x <<endl;
    /*
    on a 0.5 de type double 
    double + int  = double /int = double 
    9 + 0.5 = 9.5 / 5 = 1.9
    x = 1.9 de type float 
    */

    //============================ 7 ==================================
    x = (int)(p+0.5) /n; // x = 1 
    cout << "x = " << x <<endl;
    cout<< typeid(x).name();
    /*
    on a garder les varible de type int quand meme
    (int)(p+0.5) => (int)9+0.5 = 9 => 9 / 5 = 1
    car il est de type int est pas float 
    mais x reste de type float
    */
    //============================ 8 ==================================
    q = n * (p > n? n : p);//25
    cout << "q = " << q <<endl;
    /*
    5 * (9>5? 5 : 9)
    (9>5? 5:9) => if(9>5) on prend 5 sinom en prend 9
    ici 9>5 est vraie donc on prend 5 
    q = 5*5 = 25
    */
    //============================ 9 ==================================
    q = n * (p < n? n : p);//45
    cout << "q = " << q <<endl;
    /*
    5 * (9<5? 5 : 9)
    (9<5? 5:9) => if(9>5) on prend 5 sinom en prend 9
    ici 9<5 est fausse donc on prend 9 
    q = 5*9 = 45
    */




}
