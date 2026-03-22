/*
Tema proiectului este Comert, ideea mea de implementare a unui program orientat pe obiecte va fi o comanda online de produse de la un singur magazin. Pentru inceput,
clasele vor fi Produs, Utilizator si Cos/Comanda. Utilizatorul va introduce datele sale personale pentru comanda(nume, adresa si soldul asigurat), iar dupa aceea va putea
incepe sesiunea de cumparare. Acesta va putea vedea la inceput o lista cu toate produsele impreuna cu pretul si disponibilitatea lor. Acesta va putea alege cate un produs
si cantitatea pentru acesta, iar cand este gata va scrie check-out pentru a finaliza comanda.
Ca functii vom avea:
-atunci cand se doreste cumpararea unui produs intr-o cantitate mai mare decat stocul acesta va fi rugat sa aleaga una dintre alternative sau sa renunte la acesta
-la check-out, daca valoarea cosului este mai mare decat soldul va incepe o sesiune de eliminare de produse pana cand se va ajunge la o suma platibila
-doua functii de afisare pentru lista de produse si sumarul comenzii
-functia de adaugare si scoatere din cos
 */
#include <iostream>
#include <cstring>

class Client {
    char* nume;
    char* adresa;
    double sold;
    int id;
public:
    Client(const char* nume_, char* adresa_, double sold_, const int id_) {
        this->nume = new char[strlen(nume_) + 1];
        strcpy(this->nume, nume_);

        this->adresa = new char[strlen(adresa_) + 1];
        strcpy(this->adresa, adresa_);

        sold = sold_;
        id = id_;
    }

    char* getNume() const
    {
        char *numeReturnat = new char[strlen(nume) + 1];
        strcpy(numeReturnat, nume);
        return numeReturnat;
    }

    ~Client() =default;
};

class Produs {
        char* nume;
        double pret;
        int id, stoc;
    public:
        Produs(const char* nume_, double pret_, const int id_, int stoc_) {
            this->nume = new char[strlen(nume_) + 1];
            strcpy(this->nume, nume_);
            pret = pret_;
            id = id_;
            stoc = stoc_;
        }
        ~Produs() = default;
};

class Cos {
        double valoare;
        Client proprietar;
        int id_comanda;
        int nrProduse;
        char* status;
    public:
        Cos(const Client proprietar_, const int id_comanda_, int nrProduse_, double valoare_, char* status_) {
            this->status = new char[strlen(status_) + 1];
            strcpy(this->status, status_);
            id_comanda = id_comanda_;
            nrProduse = nrProduse_;
            valoare = valoare_;


        }
        ~Cos() = default;
};
int main() {
    Produs carne("Carne tocata vita", 15.50, 11, 23);
    Produs scaun("Scaun romantic", 89.99, 21, 12);
    Produs masa("Masa inima", 209.98, 22, 16);
    Produs fata("Fata de masa carouri", 24.97, 23, 44);
    Produs tacamuri("Set tacamuri inox", 36.66,24, 31);
    Produs paste1("Fusilli", 6.99, 12, 40);
    Produs paste2("Spaghetti", 5.49, 13, 20);
    Produs paste3("Penne", 7.67, 14, 32);
    Produs sos("Sos rosu", 10.00, 15, 50);
    Produs sos2("Sos alb", 14.20, 16, 34);


    return 0;
}