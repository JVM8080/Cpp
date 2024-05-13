#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main(){
	int a;
	srand(time(NULL));
	for(int b=1;b<=3;b++)
	{
	cout<<"\n"<<"Ciclo "<<b;
	for(int w=1; w<=20;w++){
		a=rand()%100;
		cout<<"\n"<<"salida "<<a;
	}
}
}