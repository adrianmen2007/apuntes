// Adrian Mendoza Allard 
//apunte 1 - formatos de precision para decimales
#include <iostream>
#include <iomanip> //utilizar funciones de formato
using namespace std;

int main()
{
    double numero;
    
    cout << "ingresa un numero grande con punto decimal: "; cin >> numero;
    
    cout << numero << endl; // impresion del numero sin formato
    cout << fixed << setprecision(1) << numero << endl;
    cout << fixed << setprecision(2) << numero << endl;
    cout << fixed << setprecision(3) << numero << endl;
    cout << fixed << setprecision(4) << numero << endl;
    return 0;
}