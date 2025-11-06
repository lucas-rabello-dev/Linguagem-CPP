#include <iostream>


int main() {

    // aqui um ponteiro aloca 4 bytes
    // precisa ser um ponteiro
    int *a = new int(3);
    std::cout << "Foi alocado nesse endereço: "<<a << " Esse valor: "<<  *a << std::endl;
    delete a;
    std::cout << "Alocação finalizada com delete!" << std::endl;

    return 0;
}