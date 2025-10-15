#include <iostream>

using namespace std;


// struct anônima
// não tem como criar variáveis com ela
struct {
    int coisas1 = 10;
};

typedef struct TipoDados {
  int nome1;
  int nome2;
} teste;

int main() {

    TipoDados dados;
    dados.nome1 = 100;
    dados.nome2 = 999;

    return 0;
}