/*
    unidad 1. Tipos de datos 
    Autor: Luis Antonio Leon Pedroza 
    Fecha: 15/09/22
    Descripcion: Muestra los diferentes tipos de datos en c++
*/
//Libreria para manejo de entradas y salidas de pantalla 
#include<iostream>
//Libreria para el uso de printf y scanf
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//Funcion principal de tipo entero
int main()
{
    //Mas informacion en:
    //https://www.geeksforgeenks.otg/c-data-types/
    int entero=2147483647;
    float flotante=3.4e38;
    double grande=2.565465654654;
    char caracter= 'A';

    cout <<"Este programa muestra los tipos de datos. \n";
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamano del entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "El numero flotante es: " << flotante <<endl;

    return 0;
}

    