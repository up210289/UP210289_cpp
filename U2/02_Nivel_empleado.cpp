#include<iostream>
using namespace std;

int main()
{
    int p;
    cout<<"Ingrece la puntuacion del emleado: \n"<<endl;
    cout<<"1: o.o a 0.4 \n2: o.5 a 0.6 \n3: 0.6 o mas \n";
    cin>>p;
    switch (p)
    {
    case 1:
        printf("El empleado tiene un nivel Inaceptable \n");
        break;
    case 2:
        printf("El emnpleado tiene un nivel Aceptable \n");
        break;
    case 3:
        printf("El empleado tiene un nivel Meritorio \n");
        break;
    default:printf("La puntuacion es incorrecta \n");
        break;
    }



    return 0;
}