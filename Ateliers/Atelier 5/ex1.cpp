#include <iostream>
#include <iterator>
#include <vector>
#include <set>
#include <list>
using namespace std;

// ==================================== 2 =============================================
bool rechercher(set<int> S,int v){
    return S.find(v) != S.end();
}
// ==================================== 3 =============================================
bool rechercher2(set<int>::iterator ptr_f,set<int>::iterator ptr_l,int v){
    for(ptr_f; ptr_f != ptr_l;ptr_f++){
        if(*ptr_f == v) {
            return 1 ;
            break;}

    }
    return 0;
}
// ==================================== 4 =============================================
template <class T_FLEX,class T>
bool rechercher_flexible(T_FLEX ptr_f,T_FLEX ptr_l,T v){
    for(ptr_f; ptr_f != ptr_l;ptr_f++){
        if(*ptr_f == v) {
            return 1 ;
            break;}
            
        }
        return 0;
    }
    
    
    int main(){
        // ==================================== 1 =============================================
        set <int> numbers;
        for(int i=1;i<=100;++i){
            numbers.insert(i);
        }
        for(set<int>::iterator itr=numbers.begin();itr !=numbers.end();++itr){
            cout << "\t" <<*itr;
        }
        
        // ==================================== 2 =============================================
        cout<<"\n"<<rechercher(numbers,128)<<endl;
        
        // ==================================== 3 =============================================
        cout <<"\n\t"<<rechercher2(numbers.begin(),numbers.end(),787)<<endl;
        
        // ==================================== 4 =============================================
        vector <string> names ={"zakariae", "ahmed", "saad", "said"};
        
        cout << "\n\n" <<rechercher_flexible(names.begin(),names.end(),"saad")<<endl;
        cout << "\n\n" <<rechercher_flexible(names.begin(),names.end(),"said")<<endl;
        cout << "\n\n" <<rechercher_flexible(names.begin(),names.end(),"aymane")<<endl;

        cout<< "\n=========================================================="<<endl;
        
        list <double> ls = {8.8, 9.9, 1.1, 26.3};
        cout <<"\n\n" <<rechercher_flexible(ls.begin(),ls.end(),18.2)<<endl;
        cout <<"\n\n" <<rechercher_flexible(ls.begin(),ls.end(),8.8)<<endl;
        cout <<"\n\n" <<rechercher_flexible(ls.begin(),ls.end(),26.3)<<endl;
        
        cout<< "\n=========================================================="<<endl;


        float nombre[] = {1, 8, 66, 98};
        cout <<"\n\n" <<rechercher_flexible(&nombre[0],&nombre[3],66)<<endl;
        cout <<"\n\n" <<rechercher_flexible(&nombre[0],&nombre[3],8)<<endl;
        cout <<"\n\n" <<rechercher_flexible(&nombre[0],&nombre[3],6)<<endl;



        return 0;
    }