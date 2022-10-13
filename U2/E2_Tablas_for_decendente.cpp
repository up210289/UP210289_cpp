#include<iostream>
using namespace std;

int main()
{
    int n;
    printf("Elige un número para mostrar su tabla de multiplicar \n");
    scanf("%d",&n);
    for (int i = 10; i > 0; i--)
    {
        int r = n*i;
        printf ("\n");
        printf ("%d x %d = %d",n,i,r);




    }
    printf("\n");

    return 0;
}