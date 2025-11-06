#include <iostream>

using namespace std;

int main() {

    int a = 0; // 4 bytes
    short int b = 0; // 3 bytes
    long int c = 0; // 8 bytes (dependendo da arquitetura ou compilador, pode ser 4 bytes do mesmo jeito)

    cout << "Tamanho em bytes sem modificadores: " << sizeof(a) << endl;
    cout << "Tamanho em bytes usando short: "<< sizeof(b) << endl;
    cout << "Tamanho em bytes usando long: " << sizeof(c) << endl;

    return 0;
}