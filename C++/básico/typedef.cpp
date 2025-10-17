// Parecido com o using mas menos usado -> typedef

#include <iostream>

#include <vector>

using namespace std; // Não precisa mas eu fiz porque fiquei com preguiça kkkkkk

typedef std::string string;

// Sintaxe:
// typedef <tipo de dado> <apelido>;

int main() {

    string nome = "nome 999";
    cout << nome << endl;

    return 0;
}