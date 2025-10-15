#include <iostream>
#include <map>

int main() {

    std::map<std::string, int> dados;
    dados["nome1"] = 100;
    dados["nome2"] = 200;
    dados["nome1"] = 300;

    for (auto dado : dados) {
        std::cout << dado.first << " = " << dado.second << std::endl;
    }

    return 0;
}