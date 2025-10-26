#include <iostream>
using namespace std;

void remplir(int *pt, int n){
    for(int i=0; i<n ; i++){
        cout << "entrer le nombre du case "<< i+1 <<" : ";
        cin >> *(pt+i);//cin >> pt[i]
    }
}
void afficher(int *pt, int n){
    for(int i=0; i<n ; i++){
        cout << "case " << i+1 << " : "<<*(pt+i)/*   pt[i]   */<<endl;
    }
}
int* carre(int *p,int n){
    int *pt = new(int[n]);
    for(int i=0; i<n ; i++){
        pt[i] = p[i] * p[i];
    }
    return pt;
}

int main(){
    int n;
    cout << "entrer le nombre des cases du tableau : ";
    cin >> n;
    int *pt = new(int[n]) ;
    remplir(pt, n);
    afficher(pt, n);
    int *pt_carre = carre(pt , n);
    delete [] pt;
    afficher(pt_carre, n);
    delete[] pt_carre;
    
    return 0;
}