#include <iostream>

using namespace std;

class carro{

    private:

    string nombre;
    string modelo;
    string anho;
    string potencia;

    public:

    carro(string _nombre, string _modelo, string _anho, string _potencia){
        nombre  = _nombre;
        modelo = _modelo;
        anho = _anho;
        potencia = _potencia;
    }

    void get_info(){
        cout<<"El "<<nombre<<" es un coche de "<<potencia<<" caballos de potencia, conocido por ser uno de los mas rapidos del segmento"<<endl;
        cout<<" es del anho "<<anho<<" y su modelo llega hasta el "<<modelo<<endl<<endl;
    }
 
};

int main(){
    carro mclaren("Mclaren", "2016", "2018", "1000"), lambo("Lamborghini", "2006", "2019", "890"), ferrari("SF90", "2015","2020","1020");

    mclaren.get_info();

    lambo.get_info();
    
    ferrari.get_info();


    system("pause");
    return 0;
}