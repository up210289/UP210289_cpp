#include<iostream>
#include<cmath>
#include"Libro.h"
using namespace std;

bool esBisiesto(int year)
{
    bool r = true;
    r = year%400==0 || (year%4==0 && year%100!=0);
    
    return r;
}



int main()
{
    int year;
    cout<<"A que año se refiere? " << endl;
    cin>>year;
    cout << esBisiesto(year) << endl;

    return 0;
}