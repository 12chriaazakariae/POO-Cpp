#include <iostream>
#include <string>
using namespace std;
void echanger(char& a, char& b){
    char temp = a;
    a = b;
    b = temp;
}

void permutter (string& chaine, int debut,int fin){
    if (debut == fin)
        cout << chaine <<endl;
    else{
        for(int i=debut; i <= fin; i++){
            echanger(chaine[debut], chaine[i]);
            permutter(chaine,debut+1,fin);
            echanger(chaine[debut], chaine[i]);
        }
    }    
}



int main(){
    string name = "zio";
    // cout << name.length()<<endl;
    permutter(name , 0,name.length()-1);

    return 0;

    
}