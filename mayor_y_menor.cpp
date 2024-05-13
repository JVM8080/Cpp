#include <iostream>
using namespace std;
float valMax, valMin;
int valor;
int cont=0;
int cantidad;
float N;
int main(){
    cout<<"inserte la cantida de numeros: ";
    cin>>cantidad;
    while(cont<cantidad){
    cout<<"inserte su numero: ";
    cin>>N;
    cont=cont+1;
    if(cont==1){
    valMin=N;
    valMax=N;
    }
    if(N>valMax){
        valMax=N;
    }
    if(N<valMin){
        valMin=N;
    }
    }
    cout<<"El numero mas alto es ";
    cout<<valMax;
    cout<<" y el mas bajo es ";
    cout<<valMin;
    cout<<"."<<endl;
    system("PAUSE");
    return 0;
}