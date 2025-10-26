#include <iostream>
using namespace std;
//variable globale
int n =1;
void nbre_fois(){
    cout <<"appel numero "<< n++/*acrémentation*/ <<endl;
}
int main(){
    nbre_fois();//1
    nbre_fois();//2
    nbre_fois();//3
    nbre_fois();//4
    nbre_fois();//5
    nbre_fois();//6
}