#include <iostream>
using namespace std ;


template <class T> class point{
     T x, y ; // coordonnees
public :
    point (T abs, T ord) { x = abs ; y = ord ; }
    void affiche () ;
};

template <class T> void point<T>::affiche (){ 
    cout << "Coordonnees : " << x << " " << y << "\n" ;
};

int main(){
    //=============================  1  ==============================
    point <char> p (60,65);// 60  65
    
    point <int> p1 (60,65);
    point <float> p2 (60,65);
    point <double> p3 (60,65);
    p.affiche();
    p1.affiche();
    p2.affiche();
    p3.affiche();
    return 0;
}