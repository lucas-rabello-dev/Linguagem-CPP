// std::variant é como se fosse um "any"
// é lendo mais funciona

// compilar com -std=c++17


#include <iostream>
#include <variant>

// do C++17 para funcionar
int main() {
    // variant que pode guardar int e string
    std::variant<int, std::string> valor;
    valor = "teste";
    std::cout << "rodou";
    return 0;
}