#include <iostream>             
#include <string> 
using namespace std;            
int main()                      
{   
int i,num, intentos, cont = 0;
    char palabra[100];
    cout<<"Digite cuantas letras tiene la palabra: ";
    cin>>num;
    cout<<"Digite el numero de intentos con los que desea jugar: ";
    cin>>intentos;
    cout<<"Digite  las letras: "; 
    for(i = 0; i <num ; i++)
        {
           cin>>palabra[i];
        }
    cout<<endl<<endl;
char letra;
unsigned int respuesta[num] = {0};
cout<<"Empecemos a jugar! :)"<<endl<<endl;
     for(int j = 0; j <intentos; j++)
        {   
cout<<endl<<"Digite una letra: ";
cin>>letra;
for(i = 0; i <num; i++)
        {
         if(letra == palabra[i]){
         respuesta[i] = 1;  
         }
         if(respuesta[i] == 1){
         cout<<palabra[i];
         }else{
            cout<<"_";
         }
        }
    cout<<endl;
for(int z = 0; z < num; z++){
    cont = cont + respuesta[z];
    }
    if (cont == num){
        break;
    }
    cont = 0;
    }
    if(cont == num){
        cout<<endl<<endl<<"Felicidades ganaste! :)";
    }else {
        cout<<endl<<endl<<"Joa perdiste mani ;(";
    }
    cout<<endl<<endl;
    system("pause");
}  