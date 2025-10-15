#include <iostream>

int main() {

    std::string input;
    std::getline(std::cin, input);

    // std::cin -> termina de ler até '\n' mas se houver espaços ' ' em uma palavra ele encerra a leitura e 
    // coloca na variavel apenas os primeiros caracteres que estavam antes do primeiro espaço ' ' 
    // sendo usado para ler numeros e para strings o std::getline()
    // na duvida acesse esse video https://www.youtube.com/watch?v=q8ojStK_Ulg

    int num;
    std::string input2;

    scanf("%d", &num); // Lendo um inteiro (precisa do &)
    scanf("%s", input2); // Lendo uma string

    printf("%d %s", num, input2);
    return 0;
}