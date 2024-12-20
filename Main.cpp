#include <iostream>
#include <string>
#include "Grafo.cpp"

using namespace std;

int main() {
    Grafo<string> grafoAmicizie;

    grafoAmicizie.aggiungiNodo("Loris");
    grafoAmicizie.aggiungiNodo("Fabiano");
    grafoAmicizie.aggiungiNodo("Giuseppe");
    grafoAmicizie.aggiungiNodo("Gianluca");
    grafoAmicizie.aggiungiNodo("Lorenzo");

    grafoAmicizie.aggiungiArco("Loris", "Fabiano", 8);
    grafoAmicizie.aggiungiArco("Fabiano", "Giuseppe", 5);
    grafoAmicizie.aggiungiArco("Giuseppe", "Gianluca", 6);
    grafoAmicizie.aggiungiArco("Gianluca", "Loris", 9);
    grafoAmicizie.aggiungiArco("Loris", "Lorenzo", 3);
    grafoAmicizie.aggiungiArco("Lorenzo", "Giuseppe", 7);

    cout << "Grafo iniziale:\n";
    grafoAmicizie.stampa();

    cout << "\nVerifica se il nodo 'Loris' esiste: ";
    if (grafoAmicizie.verificaNodo("Loris")) {
        cout << "Sì" << endl;
    } else {
        cout << "No" << endl;
    }

    cout << "\nNodi adiacenti a 'Loris':\n";
    grafoAmicizie.nodiAdiacenti("Loris");

    cout << "\nVerifica se esiste un arco tra 'Loris' e 'Lorenzo': ";
    if (grafoAmicizie.verificaArco("Loris", "Lorenzo")) {
        cout << "Sì" << endl;
    } else {
        cout << "No" << endl;
    }

    cout << "\nRimuovo il nodo 'Gianluca'...\n";
    grafoAmicizie.rimuoviNodo("Gianluca");
    grafoAmicizie.stampa();

    cout << "\nRimuovo l'arco tra 'Loris' e 'Lorenzo'...\n";
    grafoAmicizie.rimuoviArco("Loris", "Lorenzo");
    grafoAmicizie.stampa();

    cout << "\nAggiungo un nuovo nodo 'Luca'...\n";
    grafoAmicizie.aggiungiNodo("Luca");
    grafoAmicizie.stampa();

    cout << "\nAggiungo un arco tra 'Luca' e 'Loris' con peso 4...\n";
    grafoAmicizie.aggiungiArco("Luca", "Loris", 4);
    grafoAmicizie.stampa();

    return 0;
}
