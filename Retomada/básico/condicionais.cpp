#include <iostream>

using namespace std;

/* 
    Operadores Aritiméticos:
        + |soma               |
        - |subtração          |
        * |multiplicação      |
        / |divisão            | 
        % |resto de divisão   | retorna o resto da divisão
        ++|incremento         | aumenta 1
        --|decremento         | diminui 1


    Operadores Lógicos:
        and |  &&                  |
        or  |  ||                  |
        not |   !                  |
        ==  |  igual (comparação)  |
        !=  |  diferente           |
        <=  |   menor ou igual     |
        >=  |  maior ou igual      |
        <   |  menor que           |
        >   |   maior que          |

*/

int main() {

    // IF | ELSE IF | ELSE
    
    int numero = 10;

    if (numero == 10) {
        cout << "O numero é 10" << endl;
    } else if (numero == 11) {
        cout << "o numero é 11" << endl;
    } else {
        cout << "o numero não é 10 nem 11" << endl;
    }

    // IF | ELSE reduzidos
    // Operador ternário
    // Sintaxe:
    // condição ? se_verdadeiro : se_falso;

    int num = 33;
    num == 33 ? cout << "o numero é 33" << endl : cout << "o numero não é 33" << endl;
    

    return 0;
}