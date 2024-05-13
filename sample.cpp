#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main() {
    
    ofstream archivo("C://Users//juvar//OneDrive//Documentos//Temporal docs//C++//Txtx//archivo.txt",ios::out);
    
    archivo<<"Me prude il ano";
    
    archivo.close();

    return 0;
}