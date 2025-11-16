#include <iostream>
using namespace std ;

template <class T>
T carre(T num){
    return num*num;
}

int main(){
    int a =6;
    float b = 2.2;
    double c=18.88;
    cout<<carre(a)<<endl;
    cout<<carre(b)<<endl;
    cout<<carre(c);

    return 0;

}