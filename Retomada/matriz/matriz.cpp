#include <iostream>

using namespace std;

int main() {
    // linhas e colunas
    int matriz[3][4];
    int line, column;

    matriz[0][0] = 0;
    matriz[0][1] = 0;
    matriz[0][2] = 0;
    matriz[0][3] = 0;

    matriz[1][0] = 1;
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    matriz[1][3] = 1;

    matriz[2][0] = 2;
    matriz[2][1] = 2;
    matriz[2][2] = 2;
    matriz[2][3] = 2;


    for (line = 0; line < 3; line++){ // percorrer o tamanho exato das linhas
        for (column = 0; column < 4; column++) { // percorrer o tamanho exato das colunas
            cout << matriz[line][column] << " "; // pega o valor conforme o loop
        }
        cout << "\n";
    }

    // exemplo dois ---------------------------------------------------------

    const int linha = 2, coluna = 2;

    int matriz2[linha][coluna] = {
        {0, 0},
        {1, 1}
    };

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << matriz2[i][j] << " ";
        }
        cout << "\n";
    } 


    return 0;
}