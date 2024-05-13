#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string texto_Refran;
    ifstream primer_punto("Refran.txt");
    getline(primer_punto,texto_Refran);
    cout<<texto_Refran;
    primer_punto.close();
    return 0;
}