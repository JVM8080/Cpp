#include <iostream>

using namespace std;

int main(){
    int V[10]={0}, *dir;
    for (int i = 0; i < 10; i++){
        cout<<"Valor para V["<<i<<"] = ";
        cin>>V[i];
    }
    dir=&V[0];
    for(int j = 0; j < 10; j++){
        if(V[j] %2 == 0){
        cout<<"V["<<j<<"] =  "<<*dir<<", es par y su direccion es "<<dir++<<endl;
        }else{
        cout<<"V["<<j<<"] =  "<<*dir<<", es impar y su direccion es "<<dir++<<endl;
    }
    }
    cout<<endl<<endl;
    system("pause");
    return 0;
}