#include <iostream>

#include <fstream>

int main() {

    std::ofstream arquivo("teste.txt"); // abre/cria o arquivo para escrita

    // Trata o erro se o arquivo não abrir
    if (!arquivo.is_open()) {
        std::cerr << "erro ao abrir o arquivo!" << std::endl;
        return 1;
    }

    arquivo << "Olá mundo!" << std::endl;
    
    arquivo.close(); // Fecha o arquivo


    std::ifstream arquivo1("teste.txt"); // Abre apenas para leitura
    std::string linha;

    if (!arquivo1.is_open()) {
        std::cerr << "Erro ao abrir o arquivo!" << std::endl;
        return 1;
    }

    while (std::getline(arquivo1, linha)) {
        std::cout << linha << std::endl;
    }

    arquivo.close();
    return 0;
}