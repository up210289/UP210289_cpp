#include <iostream>
#include <math.h> 

using namespace std;

double fact(int num)
{
    double fac = 1.0;
    for (int i=1; i<=num; i++)
    {
        fac=fac*i;
    }
    return fac;
}

double G2R(double a )
{
    double r;
    r = a*M_PI/180;
    
    return r;
}

double cos(double x)
{
    double c=0;
    for (int i=0; i<=6;i++)
    {
        c=c+(pow(-1, i)*((pow(x, 2*i))/fact(2*i)));
    }
    return c;
}

int main()
{   
    double angulo;
    double result;
    double res;
    cout << "Digite el angulo" << endl;
    cin >> angulo;
    res = G2R(angulo);
    result = cos(res);
    cout << "El coseno es " << result << endl;
}