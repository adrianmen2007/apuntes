/******************************************************************************


funciones con parametros/ con return
*******************************************************************************/
#include <iostream>
using namespace std;

int funcion1(int numero){
    return numero * numero;
}

bool funcion2 (int numero){
    if (numero%2 == 0){
        return true;
    }
    else {
        return false;
    }
}

string calcularedad(int anio){
    int edad = 2026 - anio;
    return "tienes "+ to_string(edad) + " años";
    
}

int main()
{
   int x;
   
    x = funcion1(23);
    cout << funcion1(8) << endl;
    
    int valor;
    cout << "valor: ";
    cin >> valor;
    cout << funcion1(valor) <<endl;
    
    //------------- funcion2
    
    cout << boolalpha << "es par: " << funcion2(15) <<endl;
    cout << boolalpha << "es par: " << funcion2(48) << endl;

    //-------------- calcularedad
    cout << boolalpha  << " es par:" << funcion2(25) << endl;
    cout << boolalpha  <<  "es par:" << funcion2(40) << endl;
    
    return 0;
}