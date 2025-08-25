// o goto é basicamente fala para onde você tem que ir (literalmente)


#include <iostream>

int main() {

    int num = 10;
    if (num == 10) {
        goto continua;
    }
    std::cout << "Isso não vai ser impresso!" << std::endl;

    continua:
        std::cout << "Continuando o código..." << std::endl;

}