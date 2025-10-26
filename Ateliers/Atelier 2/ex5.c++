#include <iostream>
#include <string>
using namespace std;

int main() {
    int a =10;

    int &ref_a = a;//declaration du reference

    int *ptr_a = &a;//declaration du pointeur

    cout << a <<endl;// 10
    cout << &a <<endl;// le reference du variable

    cout << ref_a <<endl; // 10
    cout << &ref_a <<endl;// le reference du variabale

    cout<< *ptr_a <<endl;// 10
    cout<< ptr_a <<endl;// le reference du pointeur
  return 0;
}

