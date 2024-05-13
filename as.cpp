#include <iostream>

using namespace std;

class Hola{
    private:
        int x;
        int y;
    public:
        Hola();
};

int main(){
    cout << "Hello World" << endl;
    Hola* hola;
    hola = new Hola();
    return 0;
}

Hola::Hola(){
    cout << "Hola" << endl;
}