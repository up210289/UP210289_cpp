#include<iostream>
using namespace std;

int main()
{
    char ret;
    do
    {
        float Producto;
        float Sum=0;
        cout<<"La cuenta se detendra al introducior 0"<<endl;
        do
        {
         cout<<"Precio del producto: "<< endl;
         cin>>Producto;
         Sum=Sum+Producto;
        } while (Producto!=0);
        cout<<"Su cuenta es de: " << Sum << endl;
        cout<<"Desea repetir el programa? S/N"<< endl;
        cin>>ret;
    } while (ret=='N');
        
    return 0;
}