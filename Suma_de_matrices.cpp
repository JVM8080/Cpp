#include <iostream>
using namespace std;
void espacio1(){
    cout<<endl;
}
void espacio2(){
    cout<<endl<<endl;
}
void llenar_matriz(float matriz[3][3], const string nombre){
    cout<<"Digite los valores para cada casilla de la matriz "<<nombre<<":"<<endl;
    for(unsigned int i = 0; i < 3; i++){
        for(unsigned int j = 0; j < 3; j++){
            cout<<nombre<<"["<<i + 1<<"]"<<"["<<j + 1<<"]"<<" = ";
            cin>>matriz[i][j];
        }
    }
}
void imprimirMatriz(float matriz[3][3], const string nombre){
    cout<<endl<<endl<<"La matriz "<<nombre<<" es igual a:"<<endl;
    for(unsigned int i = 0; i < 3; i++){
        for(unsigned int j = 0; j < 3; j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl; 
    }
}
void sumar_matrices(float matriz1[3][3], float matriz2[3][3], float matriz3[3][3], float resultado[3][3]){
    for(unsigned int i = 0; i < 3; i++){
        for(unsigned int j = 0; j < 3; j++){
            resultado[i][j] = matriz1[i][j] + matriz2[i][j] + matriz3[i][j];
        }
    }
}
int main(){
    float matriz1[3][3], matriz2[3][3], matriz3[3][3], resultado[3][3];

    llenar_matriz(matriz1,"A");
    imprimirMatriz(matriz1,"A");
    
    espacio1();
    system("pause");
    espacio1();
    
    llenar_matriz(matriz2,"B");
    imprimirMatriz(matriz2,"B");
    
    espacio1();
    system("pause");
    espacio1();
    
    llenar_matriz(matriz3,"C");
    imprimirMatriz(matriz3,"C");
    
    espacio1();
    system("pause");
    espacio1();
    
    sumar_matrices(matriz1, matriz2, matriz3, resultado);
    imprimirMatriz(resultado,"resultado de la suma");
    
    espacio2();
    system("pause");
    return 0;
}