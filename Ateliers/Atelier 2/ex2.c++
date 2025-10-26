#include <iostream>
using namespace std;

void is_pair(int nbre){
    if (nbre % 2 == 0) 
        cout << nbre << " est pair " <<endl;
} 

void multiple_3(int nbre){
    if(nbre % 3 == 0 && nbre %6 ==0 ) 
        cout << nbre <<" est muliple de 3"<<"\n"<<nbre<<" est divisible par 6"<<endl;
    else if(nbre % 3 == 0 && nbre % 6 != 0)
        cout << nbre << " est multiple de 3";
}

int main(){
    int nbre ;
    char r;

    do{
    cout << "entre un nombre : ";
    cin >> nbre;
    is_pair(nbre);
    multiple_3(nbre);
    cout << "tu veux ressayer ? (y/n): ";
    cin>> r ;
    }while(r == 'y');



    return 0;
}