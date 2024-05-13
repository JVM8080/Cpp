#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

class prueba{
    private:
    int a, b;
    bool c;

    public: 
    prueba(int _a, int _b, bool _c);
    void print(); 
};

class servidor{
    private:
        double tiempo;
        double distancia;
        double velocidad;    
    public:
        servidor(double _tiempo, double _distancia, double _velocidad);
        void print();
};


int main(){

    prueba *valor1, *valor3[10];
    valor1 = new prueba(1, 2, true);
    valor1->print();

    for(int i = 0; i < 10; i++){
        valor3[i] = new prueba(i*100, 2, true);
    }

    for(int i = 0; i < 10; i++){
        valor3[i]->print();
    }

    servidor* valor2;
    valor2 = new servidor(1.0, 2.0, 3.0);
    valor2->print();

    return 0;
}


//constructores de clasess
prueba::prueba(int _a, int _b, bool _c){
    a = _a;
    b = _b;
    c = _c;       
}
servidor::servidor(double _tiempo, double _distancia, double _velocidad){
    tiempo = _tiempo;
    distancia = _distancia;
    velocidad = _velocidad; 
}

//metodos de clases
void servidor::print(){
    cout << tiempo << "\t" << distancia << "\t" << velocidad << endl;
}
void prueba::print(){
    cout << a << "\t" << b << "\t" << c << endl;
}
