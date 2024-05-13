#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double a, b, c1, c2, d, e, f, g;

    cout<<"Digite el valor de ax^3: ";
    cin>>d;
    cout<<endl<<"Digite el valor de ax^2: ";
    cin>>e;
    cout<<endl<<"Digite el valor de ax^1: ";
    cin>>f;
    cout<<endl<<"Digite el valor de ax^0: ";
    cin>>g;

    cout<<endl<<"Digite a: ";
    cin>>a;
    cout<<endl<<"Digite b: ";
    cin>>b;

    while(true){

        c1 = (a + b)/2;

        if((d*pow(a,3) + e*pow(a,2) + f*pow(a,1) +g)*(d*pow(c1,3) + e*pow(c1,2) + f*pow(c1,1) +g) < 0){
            b = c1;
        } else{
            a = c1;
        }
        if((abs(c1-c2)/c2) < 0.0005){
            break;
        }
        c2 = c1;
    }

    cout<<"La raiz esta en c = "<<c1<<endl;
    system("PAUSE");

    return 0;
}