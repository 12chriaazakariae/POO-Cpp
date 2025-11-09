#ifndef EX1_H
#define EX1_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//==================Ressource======================
class Ressource{
    protected:
    int id;
    string titre;
    string auteur;
    int annee;

    public:
    Ressource():id(0),titre(""),auteur(""),annee(0){};
    Ressource(int i,string tit,string name,int an):id(i),titre(tit),auteur(name),annee(an){};
    virtual void afficherInfos();
    virtual void telecharger();
    virtual ~Ressource(){};
    string getTitre();
    int getAnne();
    string getAuteur();
    friend bool operator==(const Ressource& r1, const Ressource& r2);
     
};
//==================Telechargeable======================
class Telechargeable {
    public:
    virtual void telecharger(){
        cout << "ce produit est telechrgeable"<<endl;
    };
    virtual void afficherMessage(){
        cout<<"Ce message est afficher"<<endl;
    }
};

//==================== Livre ======================
class Livre : public Ressource, public Telechargeable{
    private:
    string isbn;
    int nbre_page;
    public:
    Livre():Ressource(), isbn("1544er546erz"),nbre_page(215){}; 
    Livre(int i,string tit,string name,int an,string ib,int nb_p):Ressource(i,tit,name,an),isbn(ib),nbre_page(nb_p){}; 
    void afficherInfos() override;
    void telecharger() override;
};
//====================Magazine=======================
class Magazine : public Ressource, public Telechargeable{
    private:
    int edition;
    int numero;
    public:
    Magazine():Ressource(),edition(2018),numero(20659){};
    Magazine(int i,string tit,string name,int an,int ed,int num):Ressource(i,tit,name,an),edition(ed),numero(num){};
    void afficherInfos() override;
    void telecharger( )override;
    
    
};
//=====================Video==========================
class Video : public Ressource, public Telechargeable{
    private:
    int period;
    int resolution;
    public:
    Video():Ressource(),period(180),resolution(1080){};
    Video(int i,string tit,string name,int an,int p,int res):Ressource(i,tit,name,an),period(p),resolution(res){};
    void afficherInfos() override;
    void telecharger() override;
    
    
};
//==================Mediatheque======================
class Mediatheque{
    private:
    vector <Ressource*> ressources ;
    public:
    void ajouter(Ressource *r);
    void afficher();
    void rechercher_Annee(int annee);
    void rechercher_Titre(string titre);
    void rechercher(string titre,int annnee);
};





#endif