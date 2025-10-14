#include <iostream>

using namespace std;

/*
Use o atoi e o itoa ---------------------------------------------------------------------------------------
*/
int main() {
    // Conversão de tipos
    // Implicito = automático
    // Explícito = precisa informar o novo tipo de dado

    int x = 3.14;
    cout << x; // saida: 3

    double y = (int) 3.14;
    cout << y; // saida: 3

    // ASCII table
    char z = 100;
    cout << z; // saida: d
    cout << (char) 100; // saida: d

    int correct = 8;
    int questions = 10;
    double score = correct/questions * 100;
    cout << score; // saida: 0
    // isso acontece por que voce esta fazendo uma divisão com (int)
    // double score = correct/(double)questions * 100; 


    return 0;
}