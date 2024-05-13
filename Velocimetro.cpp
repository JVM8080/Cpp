#include <ctime>
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
    clock_t t1, t2;
    double distancia = 0, velocidad;

    t1 = clock();

    while (true) {
        if (getch() == 13) {
            t2 = clock();
            distancia += 2.1944024;
            velocidad = 2.1944024 / ((double)(t2 - t1) / CLOCKS_PER_SEC);
            cout << "La velocidad es: " << trunc(velocidad * 3.6 )<< " km/h" <<endl;
            cout << "La distancia es: " << trunc(distancia) << " m" << endl;
            t1 = t2;
        } else{
        	break;
		}
    }
    system("pause");
    return 0;
}