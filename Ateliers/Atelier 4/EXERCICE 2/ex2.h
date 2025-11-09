#ifndef EX2_H
#define EX2_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//==================== Client ====================
class Client {
    private:
        int idClient;
        string CIN;
        string Nom;
    public:
        Client();
        Client(int id, string cin, string nom);
        void afficherInfos();
        friend class Banque;
};

//==================== compteBancaire ====================
class compteBancaire {
    private:
        int numCompte;
        double solde;
        int codeSecret;
        Client *cli;
    public:
        compteBancaire(int numC, double montant, int codeS, Client* prop);
        void deposer(double montant);
        bool retirer(double montant, int code);
        friend class AgentBancaire;
        friend class Banque;
};

//==================== AgentBancaire ====================
class AgentBancaire {
    private:
        int idAgent;
        string nomAgent;
    public:
        void ConsulterCodeSecret(compteBancaire& cd);
        void transferer(compteBancaire& CbEn, compteBancaire& CbRec, double montant);
};

//==================== Banque ====================
class Banque {
    private:
        vector<compteBancaire*> listeCb;
    public:
        void ajouterCompte(compteBancaire *cb);
        void afficherCompter();
        void auditInterne();
};

#endif