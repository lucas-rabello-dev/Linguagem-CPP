#include <iostream>

using namespace std;

// o argc guarda o número de parametros que o programa vai receber
// o argv é um ponteiro para os argumentos

// o primeiro argumento é o nome do programa ---------------------------
int main(int argc, char *argv[]) {

    cout << argv[1] << endl;
    cout << argc << endl; 

    return 0;
}