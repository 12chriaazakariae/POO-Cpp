#include <iostream>
#include <string>
using namespace std;
//===========================partie 1 ================================================
void incrementer_ptr(int* ptr_var){
    (*ptr_var)++;
}
void permuter_ptr(int* ptr_var1, int* ptr_var2){
    int changer = *ptr_var1;
    *ptr_var1 = *ptr_var2;
    *ptr_var2 = changer;
}
//===========================partie 2 ================================================
void incrementr_ref(int& ref){
    ref++;
}
void permuter_ref(int& ref1, int& ref2){
    int change = ref1;
    ref1 = ref2; 
    ref2 = change; 
}
//=======================================================================================
int main(){
    int a = 10, b = 22;
    int *ptr_a = &a;
    int *ptr_b = &b;
    cout << *ptr_a<<endl;//10

    incrementer_ptr(ptr_a);
    cout << *ptr_a<<endl;//11

    cout <<"\t\n";

    permuter_ptr(ptr_a,ptr_b);
    cout << *ptr_a <<endl;//22
    cout << *ptr_b <<endl;//11

    cout <<"=====================partie 2 ================="<<endl;
    int c = 29, d =97;

    incrementr_ref(c);
    cout << c << endl;//30

    incrementr_ref(d);
    cout << d << endl;//98

    cout<<"\n";

    permuter_ref(c,d);
    cout << c << endl;//98
    cout << d << endl;//30



    return 0;


}