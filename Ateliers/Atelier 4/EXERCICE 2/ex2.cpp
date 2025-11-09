#include "ex2.h"

//==================== Client ====================
Client::Client() : idClient(0), CIN(""), Nom("") {}

Client::Client(int id, string cin, string nom) {
    idClient = id;
    CIN = cin;
    Nom = nom;
}

void Client::afficherInfos() {
    cout << "Id_client: " << idClient << endl;
    cout << "Cin: " << CIN << endl;
    cout << "Nom: " << Nom << endl;
}

//==================== compteBancaire ====================
compteBancaire::compteBancaire(int numC, double montant, int codeS, Client* prop) {
    numCompte = numC;
    solde = montant;
    codeSecret = codeS;
    cli = prop;
}

void compteBancaire::deposer(double montant) {
    solde += montant;
}

bool compteBancaire::retirer(double montant, int code) {
    if(code == codeSecret) {
        if (solde >= montant) {
            solde -= montant;
            cout << "tirement reussite" << endl;
            return true;
        }
        else {
            cout << "Solde Insuffissant" << endl;
            return false;
        }
    }
    else {
        cout << "Code secret incorrect" << endl;
        return false;
    }
}

//==================== AgentBancaire ====================
void AgentBancaire::ConsulterCodeSecret(compteBancaire& cd) {
    cout << "Code secret: " << cd.codeSecret << endl;
}

void AgentBancaire::transferer(compteBancaire& CbEn, compteBancaire& CbRec, double montant) {
    if(CbEn.retirer(montant, CbEn.codeSecret) == true) {
        CbRec.deposer(montant);
    }
    else {
        cout << "Erreur..." << endl;
    }
}

//==================== Banque ====================
void Banque::ajouterCompte(compteBancaire *cb) {
    listeCb.push_back(cb);
}

void Banque::afficherCompter() {
    for(auto com: listeCb) {
        cout << "Num Compte: " << com->numCompte << endl;
        cout << "Solde: " << com->solde << endl;
        cout << "codeSecret: " << com->codeSecret << endl;
        if(com->cli != nullptr) {
            com->cli->afficherInfos();
        }
        cout << "---------\n";
    }
}

void Banque::auditInterne() {
    for(auto com: listeCb) {
        cout << "Num Compte: " << com->numCompte << endl;
        cout << "Solde: " << com->solde << endl;
        cout << "codeSecret: " << com->codeSecret << endl;
        if(com->cli != nullptr) {
            cout << "Client: " << com->cli->Nom << endl;
            cout << "Cin: " << com->cli->CIN << endl;
            cout << "Id_cli: " << com->cli->idClient << endl;
            cout << "Num compte: " << com->numCompte << endl;
            cout << "CodeSecure: " << com->codeSecret << endl;
            cout << "Solde: " << com->solde << endl; 
        }
        cout << "---------\n";
    }
}