#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int cont = 0;
    double a, b, c1, c2, d, e, f, g, z;

    cout << "Digite el valor de ax^3: ";
    cin >> d;
    cout << endl << "Digite el valor de ax^2: ";
    cin >> e;
    cout << endl << "Digite el valor de ax^1: ";
    cin >> f;
    cout << endl << "Digite el valor de ax^0: ";
    cin >> g;

    cout << endl << "Digite a: ";
    cin >> a;
    cout << endl << "Digite b: ";
    cin >> b;

    cout << endl << endl;

    while (true) {
        
        cont++;                     
        
        c1 = (a + b) / 2.0;

        z = (d * pow(a, 3) + e * pow(a, 2) + f * pow(a, 1) + g) * (d * pow(c1, 3) + e * pow(c1, 2) + f * pow(c1, 1) + g);

        if (z < 0) {
            b = c1;
        } else if (z > 0) {
            a = c1;
        } else { // z == 0
            if (abs(d * pow(a, 3) + e * pow(a, 2) + f * pow(a, 1) + g) == 0) {
                c1 = a;
                break;
            }
            if (abs(d * pow(c1, 3) + e * pow(c1, 2) + f * pow(c1, 1) + g) == 0) {
                break;
            }
        }

        if (cont != 1 && (abs(c2 - c1) / c1) < 0.0005) {
            break;
        }

        c2 = c1;
    }

    cout<<endl<<endl<<"Contador: "<<cont<<endl;
    cout<<"La  raiz esta en: "<<c1<<endl<<endl;
    system("PAUSE");

    return 0;
}
