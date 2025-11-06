#include <iostream>

using namespace std;

int main() {

    // modificadores de tipos

    int a = 0; // 4 bytes
    short int b = 0; // 3 bytes
    long int c = 0; // 8 bytes (dependendo da arquitetura ou compilador, pode ser 4 bytes do mesmo jeito)
    signed int num = -2; // pode ser numeros positivos ou negativos
    unsigned int num2 = 2; // apenas numeros positivos

    cout << "Tamanho em bytes sem modificadores: " << sizeof(a) << endl;
    cout << "Tamanho em bytes usando short: "<< sizeof(b) << endl;
    cout << "Tamanho em bytes usando long: " << sizeof(c) << endl;

    // modificadores de armazenamento

    auto sla = 0; // o compilador identifica o tipo sozinho

    // AVISO
    // a partir do C++17 o uso do register foi descontinuado
    // register int i; // sugere ao compilador colocar essa váriavel em algum registrador da CPU ao inves da memória RAM
    // não é possivel pegar o endereço de uma variável register

    static int e = 10;
    // estando em uma função:
    // é alocada estaticamente na memória, e não é 
    // recriada toda vez que a função roda.
    // a variavel continua a existir mesmo se a função acabar

    // fora de uma função (nivel global)
    // Limita o escopo de visibilidade da variável ou função ao arquivo atual (file scope).
    // Isso evita conflitos de nomes entre diferentes arquivos .cpp.

    // Exemplo:
    // arquivo1.cpp
    // static int valor = 10; // visivel apenas onde foi criada

    // arquivo2.cpp
    // extern int valor; // não vai encontrar essa variável

    // AVISO
    // no caso do extern precisa compilar o arquivo onde está a variavel junto
    // para compilar: g++ main.cpp outro_file.cpp -o main
    // extern int value; // variável criada em "file_para_extern.cpp"
    // cout << value++ << endl; // saida 11

    // mutable
    // Permite modificar um membro de classe mesmo quando o objeto é const.
    // Útil quando você quer manter algum tipo de estado interno 
    // mutável, como um cache ou contador de acesso.

    // thread_local
    // Cada thread tem sua própria cópia da variável.
    // Isso evita que múltiplas threads acessem a mesma
    // variável global, prevenindo race conditions.

    

    return 0;
}