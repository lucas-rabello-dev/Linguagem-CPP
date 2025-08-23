#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main() {
    
    // Arrays estáticas -> você precisa definir o tamanho
    int num[5] = {0, 1, 2, 3, 4};
    cout << num[3] << endl;

    array<int, 3> num2 = {0, 1, 2};
    cout << num2.at(3) << endl;

    // Arrays não estáticas -> não precisa definir o tipo delas
    vector<int> num3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    cout << num3[5] << endl;
    // add itens
    num3.push_back(66);
    // remove itens
    num3.pop_back(); // remove o ultimo item
    return 0;
}