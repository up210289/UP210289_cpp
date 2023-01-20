# include <iostream>

using namespace std;

/*
void imprimirA(int A[][], int f, int c)
{
    cout << "matriz A" << endl;
    for(int i=0;i<f;i++)
    {
        for (int j=0;j<c; j++)
        {
            matriz[i][j]<< "\t";
        }
    }
}
*/
int main()
{   
    int f=2;
    int c=3;
    int matriz[f][c];
    int contador = 1;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
    }
    
     for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matriz[i][j]<< "\t";
        }
        cout<< endl;
    }

    
    return 0;
}