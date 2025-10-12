#include <iostream>
using namespace std;

void remplir(int *arr,int n){
    for (int i=0;i<n;i++){
        cout << "entrer le nombre dans la  case "<<i+1<<" :";
        cin >> *(arr +i); // arr = arr[0]
    }     
}

void afficher(const int *arr,int n){
    for (int i=0;i<n;i++){
        cout<< *(arr+i)<<endl;
    }
}

int& trouverMax(int *arr,int n){
    int index = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>arr[index]) index = i ;
    }
    return arr[index];
}

void inverse_wtab(int *arr,int n){
    int *rra = new int[n];
    int m = n - 1 ;
    for (int i = 0; i < n; i++)
    {
        rra [m] = arr[i];
        m--;
    }
    cout << "l'inverse est : "<<endl;
    for (int i = 0; i < n; i++){
        cout << rra[i]<<endl;
    }
    delete[] rra;
}

int main(){
    int n;
    cout << "Entrer la taille d'un tableau d'entiers :";
    cin >> n;
    int *arr = new int[n];
    remplir(arr,n);
    afficher(arr,n);
    int &max = trouverMax(arr,n);
    cout << "le numero maximale est: "<< max <<endl;
    inverse_wtab(arr,n);
    
    delete[] arr;
    return 0;
}

