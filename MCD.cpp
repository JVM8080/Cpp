#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b,r,f;
    cout<<"Inteserte el numero a: ";
    cin>>a;
    cout<<"Inteserte el numero b: ";
    cin>>b;
    if(a<b){
        f = a;
        a = b;
        b = f;
    }
    if(b!=0){
    do{
    r = a%b;
    a = b;
    b = r;
    } while(b != 0);
    cout<<"El MCD es "<<a;
    } else{
        cout<<"El MCD es "<<a;
    }
    return 0;
}