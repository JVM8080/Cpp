#include <iostream>

using namespace std;

int main(){
    char inicio = 'F', finall = 'A', V[6];
    int cont = 0, N;
    cout<<"¿Cual fue su nota aproximada a un numero entero entre 0 y 5?  ";
    cin>>N;
    for (char letra = inicio; letra >= finall; letra--){
        V[cont]= letra;
        cout<<"V["<<cont<<"] = "<< letra<<endl;
        cont++;
    } 
    cout<<endl<<endl<<"Su nota fue de: "<<V[N]<<endl<<endl;
    system("pause");    
    return 0;
}