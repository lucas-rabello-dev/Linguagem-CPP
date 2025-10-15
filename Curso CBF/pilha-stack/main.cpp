#include <iostream>
#include <stack>


using namespace std;


int main() {

    stack<string> Estacionamento;

    // Adicionando elementos
    Estacionamento.push("Celta 2010");
    Estacionamento.push("McLaren P1");
    Estacionamento.push("Outro carro"); // primeiro elemento da pilha

    Estacionamento.pop(); // remove o do topo no caso o "Outro carro"

    cout << "Tamanho da pilha: "<< Estacionamento.size() << endl;

    cout << Estacionamento.top() << endl; // retorna o elemento do topo

    if (Estacionamento.empty()) {
        cout << "Sua pilha está vazia!" << endl;
        return 0;
    }   
    cout << "Sua pilha nõa está vazia!" << endl;

    return 0;
}