#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{

    for(int i=10; i > 0; i--)
    {//Notemos que escribir i-- es similar a escribir i = i - 1
        cout << i+1 << endl;
    }
    system("PAUSE");
    return 0;
}