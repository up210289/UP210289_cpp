#include<iostream>
using namespace std;

int main()
{
    /*
    rp=respuesta de pizza.
    rv=respuesta pizza vegetariana para ingrediente.
    rnv=respuesta pizza no vegetariana ingrediente.
    resv= reiniciar seleccion de ingrediente de pizza vegetariana.
    resnv= reiniciar seleccion de ingrediente de pizza no vegetariana.
    resp=hacer otra orden.
    */
    char rp,resv,resnv,resp;
    int rv,rnv;
    do
    {
        cout<<"Su pizza sera vegetariana? S/N "<<endl;
        cin>>rp;
        printf("Todas las pizzas llevan tomate y mozzarella y solo se puede elejir un ingrediente extra");
        if (rp=='S')
        { 
            do
            {   
                cout<<"Exelente \nElija su ingrediente \n1. Pimiento \n2. Tofu"<<endl;
                cin>>rv;
                switch (rv)
                {
                case 1:
                    printf("Entendido, la pizza sera de tomate, mozzarella y pimiento.\n");
                    break;
                case 2:
                    printf("Entendido, la pizza sera de tomate, mozzarella y tofu.\n");
             
                default:
                    printf("Su ingrediente no es permitido.\n");
                    break;
                }
                cout<<"Cambiar de ingrediente? S/N"<<endl;
                cin>>resv;
            } while (resv=='S');

        
       
        }else if (rp=='N')
        {
            do
            {
                cout<<"Muy bien \nElija su ingrediente \n1. Peperoni \n2. Jamon \n3. Salmon"<<endl;
                cin>>rnv;
                switch (rnv)
                {
                    case 1:
                        printf("Entendido, su pizza sera de tomate, mozzarella y peperoni \n ");
                        break;
                    case 2:
                        printf("Entendido, su pizza sera de tomate,mozzarella y jamon\n");
                        break;
                    case 3:
                        printf("Entendido, su pizza sera de salmon\n");
                        break;
                    default:
                        printf("Lo siento su ingrediente es incorrecto \n");
                        break;
                }
                cout<<"Cambiar de ingrediente? S/N"<< endl;
                cin>>resnv;

            } while (resnv=='S');

        
        }
        cout<<"Hacer otra orden? S/N"<<endl;
        cin>>resp;

    } while (resp=='S');

    return 0;
}