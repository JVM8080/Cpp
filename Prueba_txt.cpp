#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    ofstream segundo_punto("Refran.txt", ios::app);
    segundo_punto.open("Refran.txt"); 
    segundo_punto<<"No es lo mismo"<<endl<<"una pelota negra,"<<endl<<"que una negra en pelota";
    segundo_punto.close();
    return 0;
}