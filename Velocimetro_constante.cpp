#include <iostream>
#include <ctime>
#include <conio.h>
#include <math.h>
#include <thread>
#include <atomic>

using namespace std;

atomic<bool> stop(false);
clock_t t1, t2;
double distancia = 0, velocidad = 0;
int cont = 0;

void contador() {
    while(true){
        if(getch() == 32){
            cont++;
            distancia += 2.1944024;
        } else {
            break;
        }
    }
    stop.store(true);
}

int main() {

    thread hilo1(contador);

    cout<<"VELOCIMETRO ENCENDIDO"<<endl<<endl<<endl;
    cout<<"Pulse otra tecla para apagar el velocimetro: "<<endl<<endl;

    while(!stop.load()){
        cont = 0;

        t1 = clock();

        clock_t t_1, t_2;
        double time;
        t_1 = clock();
        while(time < 1.5){
            t_2 = clock();
            time = (double)(t_2 - t_1)/CLOCKS_PER_SEC;
        }
        time = 0;
        t_1 = 0;
        t_2 = 0;

        t2 = clock();

        velocidad = (cont * 2.1944024)/ ((double)(t2 - t1) / CLOCKS_PER_SEC);

        cout<<"La velocidad es: "<<trunc(velocidad*3.6)<<" km/h"<<endl;
        cout<<"La distancia es: "<<trunc(distancia)<<" m"<<endl<<endl<<endl;
        cont = 0;

    }

    hilo1.join();

    cout<<endl<<endl<<endl;
    cout<<"VELOCIMETRO APAGADO"<<endl<<endl<<endl;
    cout<<"Su distancia recorrida total fue de: "<<distancia<<" m"<<endl;
    cout<<endl<<endl;
    
    system("pause");
    return 0;
}