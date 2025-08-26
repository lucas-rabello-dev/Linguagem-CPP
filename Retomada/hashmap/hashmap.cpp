#include <iostream>


int main() {

    #include <iostream>
#include <string>

int simple_hash(const std::string& input) {
    int sum = 0;
    for (char c : input) {
        sum += static_cast<int>(c); 
    }
    return sum;
}


int main() {
    auto hash = simple_hash("Dev");
    std::cout << hash << "\n";
    
    return 0;
}

std::map<int, std::string> hashMap;

hashMap[simpleHash("Dev")] = "Nosso valor";

    return 0;
}