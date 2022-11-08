#include <iostream>
#include <unistd.h>
using namespace std;

#define F 4
#define C 4

void llenarM(int a[F][C])
{
    int contador = 1;
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            a[i][j] = contador;
            contador++;
        }
        cout << "\n";
        
    }
    cout << endl;

}

void imprimirM(int a[F][C])
{
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << a[i][j] << "\t";
            sleep(500);
        }
        cout << endl;
        
    }
    cout << endl;

}



int main()
{
    int matriz[F][C];
    llenarM(matriz);
    imprimirM(matriz);

    return 0;
}


