/******************************************************************************



*******************************************************************************/
#include <iostream>
using namespace std;

float circulo(float radio){
    return 3.141592 * radio * radio;
    
}

float cuadrado(float lado){
    return lado * lado;
}

float rectangulo(float base, float altura){
    return base * altura;
}

float triangulo(float base, float altura){
    return base * altura /2;
}

float trapcecio(float bMayor, float bMenor, float altura){
    return (bMayor + bMenor) * altura /2;
}

void menu (){
    cout << " AREAS DE FIGURAS GEOMETRICAS" << endl;
    cout << " 1. ciruclo" << endl;
    cout << " 2. cuadrado" << endl;
    cout << " 3. rectangulo" << endl; 
    cout << " 4. triangulo" << endl;
    cout << " 5. trapecio" << endl;
    cout << " elige una opcion?" << endl;
}


int main()
{
    int opc;
    
    menu();
    cin>>opc;
    
    switch(opc) {
    case 1:
        cout << "el area del circulo es " <<circulo(5.3) << endl;
        break;
    case 2: 
        cout << " el area del cuadrado es " << cuadrado(7.2) << endl;
        break;
    case 3:
        cout << " el area del rectangulo es " << rectangulo(2.3, 6.8) << endl;
        break;
    case 4:
        cout << " el area del triangulo es " << triangulo(8.1, 3.0) << endl;
        break;
    case 5:
        cout << "el area del trapecio es " << trapecio(9,8,5,6,4,9) <<endl;
        break;
    default: 
        cout << "opcion incorrecta" << endl;
    }
     return 0;
}