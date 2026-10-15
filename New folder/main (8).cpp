//Adrian Mendoza Allard
//Apunte #. promedio de numeros con arreglo
#include <iostream>
using namespace std;

int main()
{
    float numeros[7];
    float suma= 0;
    
    for(int i=0; i<7; i++){
        cout << "ingresa un numero; "; cin >> numeros[i];
    }
    
    cout << "la suma de los valores es: " <<suma << endl;
    cout << "el promedio es : " << suma/7 <<endl;
    return 0;
}