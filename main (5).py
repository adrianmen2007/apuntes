#Adrian Mendoza Allard
#apunte 4 - programa que calcule el area de un circulo
import math #equivale a include, la libreria math son funciones
            #matematicas
            
radio = float(input("ingresa el radio: "))

#calculo del area sin funciones
area = 3.1416152 * radio * radio
print(f"area sin funciones:{area:.2f}")

#calculo del area  con operado de exponenciacion
area = 3.1416152 * radio ** 2
print (f"area con operando (**):{area:.2f}")

#calculo del area con funciones matematicas
area = math.pi * pow(radio,2)
print (f"area con funciones: {area:.2f}")
