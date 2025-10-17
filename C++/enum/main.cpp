#include <iostream>


/*
O enum no C++ serve para criar conjuntos de constantes nomeadas,
 geralmente usadas para representar valores que pertencem a um grupo específico.
 Ele ajuda a dar significado a números, deixando o código mais legível e fácil de manter.*/

using namespace std;

void DiaSemana();

int main() {

    enum Testes{teste1, teste2, teste3, teste4};

    Testes testando;

    testando = teste1;

    cout << testando << endl;
    
    return 0;
}


enum DiaDaSemana {domingo, segunda, terça, quarta, quinta, sexta, sabado};

void DiaSemana() {

    // criando uma váriavel do tipo DiaDaSemana
    DiaDaSemana dia = quarta;

    if (dia == quarta) {
        cout << "Hoje é quarta-feira!" << endl;
    }


}