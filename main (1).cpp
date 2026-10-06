// Adrian Mendoza Allard
// Apunte 2 - programa que calcule el area de un circulo
#include <iostream>
#include <iomanip>
#include <cmath> // libreria con funciones matematicas
using namespace std;

int main()
{
    double radio, area; // float 7 decimales - double 14 decimales 
    
    cout << "ingresa el radio: "; cin >> radio;
    area = 3.141617895 * radio * radio;
    cout << "el area del circulo es: " << fixed << setprecision(2) <<area << endl;
    
    cout << endl;
    
    cout << "ingresa el radio: "; cin >> radio;
    area = M_PI * pow(radio,2);
    cout << "el area del circulo es: " << fixed << setprecision(2) <<area << endl;
     
    
    return 0;
}