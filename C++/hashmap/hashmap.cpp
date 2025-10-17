#include <iostream>
#include <map>


int simple_hash(const std::string& input);

int main() {
    auto hash = simple_hash("Dev");
    std::cout << hash << "\n";

    std::map<int, std::string> hashMap;

    hashMap[simple_hash("Dev")] = "Nosso valor";
    
    return 0;
}


int simple_hash(const std::string& input) {
    int sum = 0;
    for (char c : input) {
        sum += static_cast<int>(c); 
    }
    return sum;
}

