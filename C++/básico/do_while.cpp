#include <iostream>

// Repete um grupo de instruçõe enquanto uma determinada condição for verdadeira

// o bloco do será executado pelo menos uma vez mesmo se a condição do while for falsa
// caso seja verdadeira o bloco do vai executar sempre até que o loop seja encerrado

using namespace std;

int main() {

    int num;

    do {
        cout << "executado..." << endl;
        cout << "Digite um numero (99 para parar o loop): ";
        std:: cin >> num;
        if (num == 99) { // Condição para encerrar o programa quando num for igual a 99
            cout << "Interrompendo o loop do while com o comando 99" << endl;
            break;
        }
        continue;
    } while (num < 111); // Quando essa condição deixar de ser verdadeira ele encerra o programa
    
}