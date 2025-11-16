#include <iostream>
using namespace std ;
class A{
    int n ;//10
    float x ;//1
    public :
    A (int p = 2){ n = p ; x = 1 ;
        cout << "** construction objet A : " << n << " " << x << "\n" ;//** construction objet A : 10 1 "\n
    }
    } ;
class B{
    int n ;//1
    float y ;//5.0
    public :
    B (float v = 0.0){
         n = 1 ; y = v ;
        cout << "** construction objet B : " << n << " " << y << "\n" ;//** construction objet B : 1 5.0 "\n
    }
    } ;
class C : public B, public A{
    int n ;//12
    int p ;//10+11=21
    public :
    C (int n1=1, int n2=2, int n3=3, float v=0.0) : A (n1), B(v){
     n = n3 ; p = n1+n2 ;
    cout << "** construction objet C : " << n << " " << p <<"\n" ;//** construction objet C : 12 21
    }
    } ;
int main(){
    C c1 ;

    C c2 (10, 11, 12, 5.0) ;

    return 0;
}