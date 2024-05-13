#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double Li, Ls, C3, C2, C1, C0, Base, suma = 0;
    unsigned int N;
    cout<<"Inserte el numero de rectangulos: ";
    cin>>N;
    cout<<"Inserte ax^3: ";
    cin>>C3;
    cout<<"Inserte bx^2: ";
    cin>>C2;
    cout<<"Inserte cx^1: ";
    cin>>C1;
    cout<<"Inserte dx^0: ";
    cin>>C0;
    cout<<"Inserte el limite inferior: ";
    cin>>Li;
    cout<<"Inserte el limite superior: ";
    cin>>Ls;
    Base  = (Ls - Li)/N;
    double altura;
    for(int w = 1; w <= N; w++){
    	double a = Li + (w * Base);
        altura = (C3 * pow(a, 3)) + (C2 * pow(a, 2)) + (C1 * pow(a, 1)) + C0;
        suma = suma + (Base * altura);
    }
    cout<<"\n"<<"El resultado de la sumatoria es: "<<suma<<endl;
    system("pause");
    return 0;
}