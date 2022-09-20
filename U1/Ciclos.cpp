#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int s1 = 0;
    int s2 = 0;
    int total=0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            
            s1 = s1 + i;
        }
        else 
        {
            s2 = s2 + i;
        }
        
    }
    printf("La sumatoria de los numeros impares es %d \n", s2);
    printf("La sumatoria de los numeros pares es %d \n", s1);
    total = s1 + s2;
    printf("La sumatoria de impares y pares es %d \n", total);
    return 0;
}