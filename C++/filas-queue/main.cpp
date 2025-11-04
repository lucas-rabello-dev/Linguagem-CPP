#include <iostream>
#include <queue>

int main() {

    std::queue<std::string> fila;

    fila.push("item 1");
    fila.push("item 2");
    fila.push("item 3");
    fila.push("item 4");

    std::cout << "Item na frente da fila: "<< fila.front() << " Item no final da fila: " << fila.back() << std::endl;
    fila.pop();
    std::cout << "Removendo o item da frente da fila usando pop()" << std::endl;
    std::cout << "Item na frente da fila: "<< fila.front() << " Item no final da fila: " << fila.back() << std::endl;

    std::cout << "tamanho: " << fila.size() << std::endl;

    // removendo tudo da fila
    while(!fila.empty()) {
        std::cout << "Primeira carta: " << fila.front() << std::endl;
        fila.pop(); // remove o primeiro item
    }
    std::cout << "tamanho: " << fila.size() << std::endl;
    std::cout << fila.front() << std::endl;


    return 0;
}