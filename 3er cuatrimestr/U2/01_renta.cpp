#include<iostream>
using namespace std;
int main()
{
    int PR,R;
    do
    {
        cout << "Ingrese el costo de su renta:  " << endl;
        cin >> PR;
        if (PR<=10000)
        {
            cout<<"Tu impuesto es de 5%" << endl;
        }else if (PR<=20000)
        {
            cout<<"Tu impuesto es de 10%" << endl;
        }else if (PR<=35000)
        {
            cout<<"Tu impuesto es de 15%" << endl;
        }else if (PR<=60000)
        {
            cout<<"Tu impuesto es de 30%" << endl;
        }else if (PR>60000)
        {
            cout<<"Tu impuesto es del 45%" << endl;
        }
        cout<<"Desea intentarlo de nuevo?\n1. Si \n2 No \n";
        cin>>R;
    
    } while (R == 1);
    return 0;
}     
