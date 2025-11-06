#include <iostream>

using namespace std;

struct Carro {
  string nome;
  string cor;
  double ValMax;
};

int main() {

    Carro carro;

    carro.nome = "mclaren";
    carro.cor = "preto";
    carro.ValMax = 589000.00;

    cout << carro.nome << endl;


    return 0;
}