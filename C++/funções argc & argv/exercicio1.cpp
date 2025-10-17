#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    cout << "Número de argumentos: " << argc - 1 << endl; 

    int sum = atoi(argv[1]) + atoi(argv[2]);

    cout << "A soma dos números é: " << sum << endl;
    
    return 0;
}