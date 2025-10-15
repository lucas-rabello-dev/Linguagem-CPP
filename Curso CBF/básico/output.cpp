#include <iostream>


using namespace std;

int main() {

    printf("teste \n"); // -> com o caractere '\n' tem o efeito de pular uma linha
    printf("teste");

    float num = 12.22088348f;
    printf("%0.2f \n", num); // Exibe o valor apenas com duas casas decimais
    printf("%f \n", num); // Exibe o valor todo

    cout << "Exemplo com 'cout' sem pular linha";
    cout << "Exemplo com 'cout' pulando linha" << endl;
    cout << "Exemplo usando a variável " << num << endl;


    return 0;
}