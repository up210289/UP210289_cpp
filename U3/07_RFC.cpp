#include<iostream>
#include<string.h>

using namespace std;

int main() 
{
    string ApellidoP;
    string ApellidoM;
    string PrimerNombre;
    string Nacimiento;
    string RFC;

    cout << "Cual es tu apellido paterno? " << endl;
    cin >> ApellidoP;
    cout << "Cual es tu apellido materno? " << endl;
    cin >> ApellidoM;
    cout << "Cual es tu primer nombre? " << endl;
    cin >> PrimerNombre;
    cout << "Cuando es tu cumpleaños? (Escribirlo todo junto, sin omitir los ceros \nEjemplo: \n03012003 "<< endl;
    cin >> Nacimiento;


    RFC= ApellidoP.substr(0, 2) + ApellidoM.substr(0, 1) + PrimerNombre.substr(0, 1) + Nacimiento.substr(4, 4) + Nacimiento.substr(2, 2) + Nacimiento.substr(0, 2);
 
    cout<<"Tu RFC es: "<< RFC << endl;


    return 0;
}