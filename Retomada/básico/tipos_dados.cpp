#include <iostream>

// Para verificar o tipo da váriavel
#include <typeinfo>
//  std::cout << typeid(variavel).name(); -> .name() para transformar em string 

const int numero4 = 10; // -> Define um valor que não pode ser alterado

#define numero5 = 29; // Menos usado pois aqui não tem o tipo da váriavel definido

int main() {

    // Tipos de dados
    int numero = 10; // números inteiros | 4 Bytes
    float numero2 = 19.00; // Numeros flutuantes (com vírgula) | 32 Bytes

    // Forçar que uma váriavel seja float
    float a = 12.06709999f; // -> Com o (f) no final 

    double numero3 = 12.99; // Numeros flutuantes (mais preciso) | 64 Bytes
    bool Ativo = true; // boolean sendo retratado com true ou false | 8 Bytes
    bool Ativo2 = false; // boolean sendo retratado com true ou false | 8 Bytes
    char caractere = 'a'; // caractere único representado com '' | 1 Byte
    // void -> representa nulo e é usado em funções

    std::string nome = "nome"; // Usando para representar strings com "" | 32 Bytes

    // Modo Antigo para strings (Linguagem C)
    char nome2[100] = "nome bem grandeeee"; // | 100 Bytes

    std::cout << sizeof(nome) << std::endl; // -> Retorna o tamanho do tipo de dado da váriavel em Bytes 
    
    return 0;
}

