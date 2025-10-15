#include <iostream>

using namespace std;

int soma(int n, int n2, int n3);
int soma(int n, int n2);

int main() {

    cout << soma(2, 3, 4) << endl;

    return 0;
}

int soma(int n, int n2, int n3) {
    return n + n2 + n3;
}

int soma(int n, int n2) {
    return n + n2;
}