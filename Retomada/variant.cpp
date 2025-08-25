// std::variant é como se fosse um "any"
// é lendo mais funciona


#include <iostream>
#include <variant>
#include <typeinfo>

// do C++17 para funcionar
int main() {
    // variant que pode guardar int e string
    std::variant<int, std::string> valor;
    valor = "teste";
    return 0;
}