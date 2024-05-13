#include <iostream>
#include <math.h> 
using namespace std;
int main(){    
    unsigned int N;
    double a = 0;    
    cout<<"Inserte el numero final de la serie: ";    
    cin>>N;    
    for(unsigned int w = 1; w <= N; w++){        
        a = a + (1.0 / w);    
    }   
    cout<<"Resultado: "<<a<<endl;    
    system("pause");    
    return 0;
}