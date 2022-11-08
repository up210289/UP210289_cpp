#include<iostream>
using namespace std;

int menorV(int x[], int N)
{
    int men;
    for (int i=0; i<N; i++)
    {
        men = x[0];
        if (x[i] < men)
        {
            men= x[i];
        }

    }
    return men;
}

int mayor2(int x, int y)
{
    int mayor;
    mayor = (x > y) ? x : y ;


    return mayor;
}
int main()
{
    int n = 5;
    int cal[] = {10,9,8,7,6};
    

    int menor = menorV(cal, 5);
    int may = mayor2(5,10);
    cout << "Menor = " << menor << endl;
    cout << ". . . H e c h o"<< endl;
    cout << "Mayor2 = " << may <<endl;

    /*
    cal [0] = 10;
    cal [1] = 9;
    cal [2] = 8;
    cal [3] = 7;
    cal [4] = 6;
    int cal2[] ={10,9,8,7,6};;
    int meses[]={31,28,31,30,31,30,31,30,31,30,31,30};
    double total = 0;

    for(int i=0; i< n; i++)
    {
        total = total + cal2[1];

    }
    double promedio = total/n;
    cout<< promedio<< endl;
*/
    return 0;
}