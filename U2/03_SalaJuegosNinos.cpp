#include<iostream>
using namespace std;

int main()
{
    int E;
    printf("¿Cuál es la edad del cliente? \n");
    cout<<"1. 4 años o menor \n2. De 4 a 18 años\n3. Mayor a 18 años"<< endl;
    cin>>E;
    switch (E)
    {
    case 1:
        printf("Al cliente no se le cobra nada, entra GRATIS \n ");
        printf("\n");
        break;
    case 2:
        printf("Al cliente se le deben cobrar $5 \n");
        break;
    case 3:
        printf("Al cliente se le debe cobrar $10 \n");
        break;
    
    default:
        printf("La edad del cliente es erronea\n");
        break;
    }



    return 0; 
}