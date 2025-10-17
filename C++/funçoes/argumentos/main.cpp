#include <iostream>

using namespace std;

const string ERROR_STR = "Erro string inválida";  // valor default para a função

// adicionando um valor padão
void imp(string s = ERROR_STR);

int main() {

    imp("");
 
    return 0;
}

void imp(string s) {
    if (s == "") {
        cout << ERROR_STR << endl;
        return; // finaliza a função
    }
    cout << s << endl;
}