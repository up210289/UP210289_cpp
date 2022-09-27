#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Ingrese la edad a evaluar: " << endl;
    cin >> edad;
    if (edad >= 1 && edad <= 150)
    {
        if (edad > 0 && edad < 31){
            printf("Primera Edad");
        }else if (edad > 30 && edad < 61 ){
            printf("Segunda Edad");
        }else if (edad > 60 && edad < 91){
            printf("Tercera Edad");
        }else if (edad > 90 && edad < 151){
            printf("Horas extra");
        }
        
        
    }
    else
    {
        printf("La edad es invalida");
    }
    

    return 0;
}