#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int NumDatos;
    int arr[NumDatos];
    int sumatoria=0;
    double sum2 = 0.0;
    cout << "Cuantos datos son? " << endl;
    cin >> NumDatos;
    cout << "Ponga los datos de uno por uno en enteros" << endl;

    for(int i=0; i<NumDatos; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < NumDatos; i++)
    {
        sumatoria = sumatoria + arr[i];
    }
    
    double media = (double) sumatoria/NumDatos;

    for (int i = 0; i < NumDatos; i++)
    {
        sum2 = sum2 + (arr[i]- media)*(arr[i] - media);
    }
    
    double varianza = (double) sum2/NumDatos;
    double dem = (double) sum2/(NumDatos-1);
    double desviacionEstandar = sqrt(varianza);
    double desviacionEstandarM = sqrt(dem);

    cout << "Media: " << media << endl;
    cout << "Desviacion Estandar Poblacional: " << desviacionEstandar << endl;
    cout << "Desviacion Estandar Muestral: " << desviacionEstandarM << endl;
}