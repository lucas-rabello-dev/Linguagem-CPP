// Utilizado para organizar os códigos e evitar conflitos

#include <iostream>

namespace nome {
    int a = 1;
    std::string usuario = "nome-de-uma-pessoa";
    std::string espaco = " ";
}

int main() {

    std::cout << nome::a << nome::espaco << nome::usuario << std::endl; 

    return 0;
}