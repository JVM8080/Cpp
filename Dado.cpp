#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    unsigned int P;
    cout<<"Inserte el numero de lanzamientos: ";
    cin>>P;
    int D1, D2, smDados, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, C6 = 0, C7 = 0, C8 = 0, C9 = 0, C10 = 0, C11 = 0;
    srand(time(NULL));
    for(int w = 1; w <= P; w++){
    D1 = rand()%6 + 1;
    D2 = rand()%6 + 1;
    smDados = D1 + D2;
    if(smDados == 2){
        C1 = C1 + 1;
    }
    if(smDados == 3){
        C2 = C2 + 1;
    }
    if(smDados == 4){
        C3 = C3 + 1;
    }
    if(smDados == 5){
        C4 = C4 + 1;
    }
    if(smDados == 6){
        C5 = C5 + 1;
    }
    if(smDados == 7){
        C6 = C6 + 1;
    }
    if(smDados == 8){
        C7 = C7 + 1;
    }
    if(smDados == 9){
        C8 = C8 + 1;
    }
    if(smDados == 10){
        C9 = C9 + 1;
    }
    if(smDados == 11){
        C10 = C10 + 1;
    }
    if(smDados == 12){
        C11 = C11 + 1;
    }
    cout<<"Resultado de lanzamiento "<<w<<":"<<endl;
    cout<<"   Dado 1 = "<<D1<<endl;
    cout<<"   Dado 2 = "<<D2<<endl;
    }
    cout<<"\n"<<"Frecuencia de aparicion de valores en la suma de los resultados: "<<endl;
    cout<<"   El 2 aparecio: "<<C1<<"."<<endl;
    cout<<"   El 3 aparecio: "<<C2<<"."<<endl;
    cout<<"   El 4 aparecio: "<<C3<<"."<<endl;
    cout<<"   El 5 aparecio: "<<C4<<"."<<endl;
    cout<<"   El 6 aparecio: "<<C5<<"."<<endl;
    cout<<"   El 7 aparecio: "<<C6<<"."<<endl;
    cout<<"   El 8 aparecio: "<<C7<<"."<<endl;
    cout<<"   El 9 aparecio: "<<C8<<"."<<endl;
    cout<<"   El 10 aparecio: "<<C9<<"."<<endl;
    cout<<"   El 11 aparecio: "<<C10<<"."<<endl;
    cout<<"   El 12 aparecio: "<<C11<<"."<<endl;
    cout<<"\n";
    system("pause");
    return 0;
}