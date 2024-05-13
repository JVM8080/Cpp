#include <iostream>
#include <ctime>
#include <conio.h>
#include <math.h>
#include <thread>

using namespace std;

clock_t t1, t2;
double distancia = 0, velocidad, intervalo = 1.3;
int cont = 0, stop = 0, while_cont = 0, cont_final = 0;

void temporizador() {

    clock_t t_1, t_2;
    double tiempo;

    t_1 = clock();

    while(tiempo < intervalo){

        t_2 = clock();
        tiempo = (double)(t_2 - t_1)/CLOCKS_PER_SEC;
    }

    cout<<"stop"<<endl;

    stop = 1;
}

int main() {

    t1 = clock();

    while(true){

    while (stop = 0) {

        while_cont++;

        if(while_cont == 1){
            thread thread1(temporizador);
        }

        if(getch()== 13){
            cont++;
            distancia += 2.1944024;
        }
    }

    while_cont = 0;

    t2 = clock();

    velocidad = (cont * 2.1944024) /((double) (t2 - t1)/CLOCKS_PER_SEC);

    t1 = t2;
    stop = 1;
    
    cont_final += cont;

    cont = 0;

    cout << "La velocidad es: " << trunc(velocidad * 3.6 )<< " km/h" <<endl;
    cout << "La distancia es: " << trunc(distancia) << " m" << endl;

}

    system("pause");

    return 0;
}