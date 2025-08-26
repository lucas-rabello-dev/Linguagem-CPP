#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    // se ordena sozinho
    map<int, string> ordenado;
    // é desordenado porém mais rápido e usa menos memória
    unordered_map<int, string> desordenado;

    ordenado[3] = "três";
    ordenado[1] = "um";
    ordenado[2] = "dois";

    desordenado[3] = "três";
    desordenado[1] = "um";
    desordenado[2] = "dois";

    cout << "map (ordenado):" << endl;
    for (auto& p : ordenado) {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << "\nunordered_map (sem ordem):" << endl;
    for (auto& p : desordenado) {
        cout << p.first << " -> " << p.second << endl;
    }
}
