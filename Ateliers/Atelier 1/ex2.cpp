#include <iostream>
using namespace std;
int main(){
    char c = '\x05'; // 5
    int n = 5;
    long p = 1000;
    float x = 1.25;
    double z = 5.5;

//================================ 1 ============================================
    cout << "n + c + p = "<<n + c + p<<endl ;//=1010
    /*
     5 + 5 + 1000 = 1010
    int + char + long = long
    convertir vers le plus grand == long 
    */ 
//================================ 2 ============================================
    cout <<"2* x + c = " <<2* x + c << endl; // =7.5
     //int * float + char = float (le plus grand)
//================================ 3 ============================================
    cout <<"(char) n + c = " <<(char) n + c<<endl; // =10
    // char + char = int;
//================================ 4 ============================================
    cout <<"(float)z + n/2 = " <<(float)z + n/2 <<endl; // =7.5
    //float + char / int = float

    return 0;
}
