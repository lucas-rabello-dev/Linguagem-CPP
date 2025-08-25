#include <iostream>
#include <vector>
#include <map>

using namespace std;

// função sem retorno
void FalarOi() {
    cout << "Oi (isso veio de uma função)" << endl;
}
// com retorno de string
std::string RetornoSTR() {
    return "retorno de string";
}
std::map<int, int> RetornaMap() {
    std::map<int, int> map;
    map[1] = 10;
    map[2] = 20;
    map[3] = 30;
    return map;
}
std::vector<int> RetornaArrayVector() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    return arr;
}

// parametro por valor
void PorValor(int a) {
    cout << "Dentro da função por valor o valor do número é: " << a + 10 << endl;
}

// parametro por referência
void PorReferencia(int* a) {
    *a += 10; // o ( * ) precisa vir antes da váriavel nesse caso
}

int main() {

    int a = 10;
    cout << "Antes da função por valor: " << a << endl;
    PorValor(a);
    cout << "Depois da função por valor: " << a << endl;
    PorReferencia(&a);
    cout << "Depois da função por referência: " << a << endl;    

    return 0;
}