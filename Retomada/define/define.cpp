#include <iostream>
#include <typeinfo>

using namespace std;

// é basicamente uma constante
#define pi 3.1415
// porém usando o const você consegue definir o tipo da váriavel

// pode também colocar comandos
#define printar_oi cout << "#define == Oi" << endl;

int main() {
    
    
    cout << typeid(pi).name() << endl; // double
    printar_oi;
    return 0;
}