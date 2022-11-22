#include<iostream>
using namespace std;

int mil=0,quinientos=0,docientos=0,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,dos=0,uno=0;
int residuo,dindado;

int cambio(int billete, int dindado)
{
    int resultado;
    resultado = dindado/billete;
    residuo= dindado% billete;
    dindado=residuo;
    return resultado;
}

int main()
{
    cout << "Que cantidad quiere desglosar? " << endl;
    cin >> dindado;

    mil= cambio(1000,dindado);
    quinientos = cambio(500, residuo);
    docientos = cambio(200, residuo);
    cien = cambio(100, residuo);
    cincuenta = cambio(50, residuo);
    veinte = cambio(20, residuo);
    diez = cambio(10, residuo);
    cinco = cambio(5, residuo);
    dos = cambio(2, residuo);
    uno = cambio(1, residuo);

    cout << "Mil: " << mil << endl;
    cout << "Quinientos: " << quinientos << endl;
    cout << "Docientos: " << docientos << endl;
    cout << "Cien: " << cien <<endl;
    cout << "Cincuenta: " << cincuenta << endl;
    cout << "Veinte: " << veinte << endl;
    cout << "Diez: " << diez << endl;
    cout << "Cinco: " << cinco << endl;
    cout << "Dos: " << dos << endl;
    cout << "Uno: " << uno << endl;  
    cout << "Diez: " << diez << endl;
    cout << "Cinco: " << cinco << endl;
    cout << "Dos: " << dos << endl;
    cout << "Uno: " << uno << endl; 
}
