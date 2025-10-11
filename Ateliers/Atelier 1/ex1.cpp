#include <iostream>
using namespace std;
int main(){
    char c = '\x01';
    short int p = 10;
//=================================== 1 ===========================================
cout << "p+3 = " << p+3 << endl; 
	/* p+3 = 13 
	   -p de types short
	   -3 de type int 
	   => le resultat (13)de type int  */
//=================================== 2 ===========================================
cout << "c+1 = "<<c+1 << endl; 
	/* c+1 = 2
	   - c de type char 
	   - 1 de type int 
	   => le resultat va etre en int (char est tres petit par rapport a int)*/
//=================================== 3 ===========================================
cout << "c + p = "<< c+p << endl; 
	/* c+p = 11
	   - c de type char 
	   - p de type short 
	   => le resultat va etre en int */
//=================================== 4 ===========================================
cout << "3*p + 5*c = "<< 3*p +5 * c << endl; 
	/* 3*p + 5*c = 35 == 3 * 10 + 5 * 1 =35 */

return 0;
}