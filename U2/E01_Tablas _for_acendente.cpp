
//objetivo: tabla de multiplicar con ciclos
#include<iostream>
using namespace std;
int main()
{
    int n;
    printf("Elige un número para mostrar su tabla de multiplicar \n");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        int r = n*i;
        printf ("\n");
        printf ("%d x %d = %d",n,i,r);

    }
   



    return 0;
}