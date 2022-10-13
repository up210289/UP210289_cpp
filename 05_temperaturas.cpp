# include<iostream>
using namespace std;

int main()
{
    char ret;
    do
    {
        float T,M,Me,S,P;
        T=0;
        M=-100;
        Me=100;
        S=0;
        cout<<"Dame 6 temperaturas en Grados centigrados para devolverte el promedio, la temperatura mayor y la temperatura menor\n";
        for (int i = 1; i <= 6; i++)
        {
            cin>>T;
            if (T>M)
            {
                M=T;
            }
            if(T<Me)
            {
                Me=T;
            }
            S=S+T;  
        }
        P=S/6;
        cout<<"El promedio es: "<< P <<"\nEl numero mayor es: "<< M <<"\nEl numero menor es: "<< Me << endl;
        cout<<"Quiere repetir el programa? S/N"<<endl;
        cin>>ret;
    } while ( ret =='S');
    return 0;
}
