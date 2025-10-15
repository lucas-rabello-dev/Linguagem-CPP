#include <iostream>

// Using -> usado para apelidar tipos de dados

using namespace std; // -> usado para evitar de usar o std:: 

// Exemplo usando o namespace e using criando meus tipos de dados
namespace user {
    string nome = "nome 999";
}
using namespace user;

int main() {
    
    cout << "Teste" << endl;

    cout << nome << endl;

    return 0;
}