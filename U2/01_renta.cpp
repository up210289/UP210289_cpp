#include<iostream>
using namespace std;
int main()
{
    int PR;
    cout << "Ingrese el costo de su renta:  " << endl;
    cin >> PR;
    if (PR> 10000)
    {
        cout<<"Tu impuesto es de 5%";
    }else if (PR<=20000)
    {
        cout<<"Tu impuesto es de 10%";
    }else if (PR<=35000)
    {
        cout<<"Tu impuesto es de 15%";
    }else if (PR<=60000)
    {
        cout<<"Tu impuesto es de 30%";
    }else if (PR>60000)
    {
        cout<<"Tu impuesto es del 45%";
    }
    
    return 0;
}