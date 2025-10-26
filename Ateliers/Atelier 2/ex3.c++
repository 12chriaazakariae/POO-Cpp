#include <iostream>
using namespace std;

void min_max(int tab[]){
    int min = tab[0], max = 0;
    for(int i=0; i<10; i++){
        if(tab[i] > max){
            max = tab[i];
        }
    }
    for(int i=0; i<10; i++){
        if(tab[i] < min){
            min = tab[i];
        }
    }
    cout << "maximum is : "<< max << endl;
    cout << "minimum is : "<< min << endl;
}
void min_max_ptr(int *p){
    int min = *p , max = 0;
    for(int i=0; i<10; i++){
        if(*(p+i) > max)
            max = *(p+i) ;
        
    }
    for(int i=0; i<10; i++){
        if(*(p+i) < min)
            min = *(p+i);
        
    }
    cout << "maximum is : "<< max << endl;
    cout << "minimum is : "<< min << endl;

}

int main(){
    int tab[10] = {12, 6, 3, 97, 26, 6, 35, 8, 9, 10};
    //min_max(tab);
    int *pt = tab;
    min_max_ptr(pt);

    return 0;
}