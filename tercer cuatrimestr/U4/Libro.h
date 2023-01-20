#include<iostream>
#include<cmath> 
using namespace std;

void clrscr()
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y,
                               coord, &count);
    SetConsoleCursorPosition(hStdOut, coord);
}

void gotoxy(int x, int y)
{
    HANDLE hconsola;
    COORD Wpos;
    Wpos.X = x;
    Wpos.Y = y;
    hconsola = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hconsola, Wpos);
}

int sum(int x, int y)
{
    return(x+y);
}

double G2R(double a )
{
    double r;
    r = a*M_PI/180;
    
    return r;
}

double seno(double a)
{
    return sin(G2R(a));
}

double factorial(int num)
{
    double fac = 1.0;
    for (int i=1; i<=num; i++)
    {
        fac=fac*i;
    }
    return fac;
}