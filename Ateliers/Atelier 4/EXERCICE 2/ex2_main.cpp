#include <iostream>
#include "ex2.h"
using namespace std;

int main() 
{
    Client cl1(1, "k15402", "Ayadi");
    Client cl2(2, "K47851", "Benjaloune");
    Client cl3(3, "k45718", "Kharbouch");

    compteBancaire Cm1(123, 1512.50, 1425, &cl1);
    compteBancaire Cm2(124, 5471.50, 4781, &cl2);
    compteBancaire Cm3(125, 1800.00, 1420, &cl3);

    //cas normale
    Cm1.deposer(1800.50);
    Cm1.retirer(1500, 1425);
    cout << "\n------\n";
    
    //mauvais code
    Cm2.deposer(500.0);
    Cm2.retirer(600, 0000);
    cout << "\n------\n";
    
    //depase solde banquaire
    Cm3.deposer(100);
    Cm3.retirer(2500, 1420);
    cout << "\n------\n";

    // tansferer money from cm1 to cm2
    AgentBancaire Ab;
    Ab.ConsulterCodeSecret(Cm2);
    Ab.transferer(Cm1, Cm2, 1200);
    cout << "\n------\n";

    Banque Lis;
    Lis.ajouterCompte(&Cm1);
    Lis.ajouterCompte(&Cm2);
    Lis.ajouterCompte(&Cm3);

    //-----AfficheInfo
    Lis.afficherCompter();

    //Affiche details Internes comptes
    Lis.auditInterne();

    return 0;
}