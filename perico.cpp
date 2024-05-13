#include <iostream>
#include <ctime> 
#include <stdio.h>
#include <conio.h>
using namespace std;
 
clock_t t0, t1;
int main(){
char g;
int cont;
float da,v;
t0=clock();
while (true){
g=getch();
if(g == 32){
cont++;
da=da+2.19;
t1 = clock();
double time = (double(t1-t0)/CLOCKS_PER_SEC);
cout << "Tiempo transcurrido:  " << time << endl;
v=(2.19/time)*3.6;
cout<< "distancia transcurrida: " << da<< endl;
cout<< "velocidad: "<< v << endl; 
t0 = t1;
}
}
return 0;
}