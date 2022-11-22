#include<iostream>
 
using namespace std;

int main()
{
    short int i,j,n;

    cout << "Introduce numero de datos del vector: " << endl;
    cin>> n;

    float vector[n];
    float aux;

    cout <<  " Introduce los datos del vector: " << endl;
    for ( i = 0; i < n ; i++)
    {
        cout << "Dato["<<i<<"]: ";
        cin >> vector[i];
    }

    for(j=0; j<n-1; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if (vector[i]>vector[i+1])
            {
                aux= vector[i];
                vector[i]=vector[i+1];
                vector[i+1]=aux;
            }

        }
    }

    cout << "Los datos ordenados son: " << endl;
    for (i=0; i<n; i++)
    {
        cout << vector[i] << endl;
    }


    
    return 0;
}