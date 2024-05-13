#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream Archivo;
    Archivo.open("Refran.txt"); 
    Archivo<<"No es lo mismo";
    Archivo.close();

    cout<<endl<<endl<<"Primer punto"<<endl<<endl;

    string texto_Refran;
    ifstream primer_punto("Refran.txt");
    getline(primer_punto,texto_Refran);
    cout<<texto_Refran<<endl;
    primer_punto.close();

    cout<<endl<<endl<<"Segundo punto"<<endl<<endl;

    ofstream segundo_punto;
    segundo_punto.open("Refran.txt");
    segundo_punto<<"No es lo mismo"<<endl<<"una pelota negra,"<<endl<<"que una negra en pelota"<<endl;
    segundo_punto.close();

    cout<<endl<<endl<<"Tercer punto"<<endl<<endl;

    char refran_completo;
    ifstream tercer_punto("Refran.txt");
    while(!tercer_punto.eof()){
    tercer_punto.get(refran_completo);
    cout<<refran_completo;
    }
    tercer_punto.close();
    return 0;
}