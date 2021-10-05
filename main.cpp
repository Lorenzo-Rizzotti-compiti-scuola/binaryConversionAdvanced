#include <iostream>
#include "string"

using namespace std;

int main() {
    //Uso una stringa per evitare di allocare prima il char senza saperne le dimensioni volute
    string bits;
    char *endpointer;

    cout << "Inserisci un numero in binario: ";
    cin >> bits;

    cout << (int) strtol(&bits[0], &endpointer, 2) << endl;
    return 0;
}
