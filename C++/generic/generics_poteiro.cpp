#include <iostream>

template <typename T> //Generics
T* RealValue(T &a) { // retorna um ponteiro
    return &a; // o endereço da variável que a função recebeu
}

int main() {

    int a = 10; // variável simples
    int *ptr = &a; // ponteiro que aponta para o endereço da variável a

    // como a função retorna um endereço é preciso instânciar a função com um ponteiro
    int* real = RealValue(*ptr);
    std::cout << *real << std::endl;
    return 0;
}