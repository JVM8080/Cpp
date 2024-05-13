#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string refran_completo;
    ifstream tercer_punto("Refran.txt");
    while(!tercer_punto.eof()){
    getline(tercer_punto,refran_completo);
    cout<<refran_completo;
    }
    tercer_punto.close();
    return 0;
}