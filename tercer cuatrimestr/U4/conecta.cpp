#include <iostream>
#include <windows.h>
#include "Libro.h"

int col = 0, row = 0;
int turno = 2;
char valor;
char gameArea[6][7] =
    {
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '}};

void inicio()
{
    clrscr();
    cout << "\x1B[41m"
         << "BIENVENIDO A CONECTA 4"
         << "\x1b[0m"<< endl;
    cout << endl;
}

void signo_gato()
{   
    int color =33;
    int h = 0, k = 0;
    int X = 1;
    for (int a = 0; a <= 6; a++)
    {
        gotoxy(3 + 6 * a, 2);
        cout << X << "     ";
        X++;
    }
    cout << endl;
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j <= 42; j++)
        {
            if (i % 4 == 0 && j % 6 != 0 || i == 0)
            {
                cout << "\x1b[0;36m"
                     << "-"
                     << "\x1b[0m";
            }
            else if (j % 6 == 0)
            {
                cout << "\x1b[0;36m"
                     << "|"
                     << "\x1b[0m";
            }
            else if (i != 0)
            {
                if (i % 2 == 0 && j % 3 == 0)
                {   
                   color = (gameArea[h][k] == 'O')?31
                        :(gameArea[h][k]=='X')?33:37;
                
                    cout << "\x1B[1;" << color <<"m" << gameArea[h][k] << "\x1B[0m";
                    k++;
                }
                else
                { 
                    
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }
    h++;
    k = 0;
}

int selCol()
{   
    int player;
    if (turno % 2==0){
        player=2;
        cout << "\x1b[0;33m" << "Player " << player << "\x1b[0m";
    }else{
        player=1;
        cout << "\x1b[0;31m" << "Player " << player << "\x1b[0m";
    }
    cout << "  selecciona una columna: ";
    cin >> col;
    col--;
    while (col < 0 || col >=7)
    {
        cout << "La columna no existe, ingresa una válida: ";
        cin >> col;
        cout <<endl;
    }
    return col;
}

int checkfila(int col)
{
    
    for (int row= 5; row >= 0; row--)
    {
        if (gameArea[row][col] == ' ')
        {
            return row;
        }
    }
    return -1;
}

void ponerJugada(int row, int col)
{
    char valor;
    if (turno % 2 == 0) //pares
    {
        valor = 'X';
    }
    else
    {
        valor = 'O';
    }
    gameArea[row][col] = valor;
}

bool esGanador(int row, int col)
{
    bool ganador = false;
    int acum = 1;
    int arow = 1;
    int nCol = col + 1;
    int n2Col = col - 1;
    int nRow = row + 1;
    int n2Row = row - 1;
    int pRow=row-1;
    int pCol=col+1;
    int n1Row=row+1;
    int n1Col=col-1;
    int n3Row=row-1;
    int n3Col=col-1;
    int n4Row=row+1;
    int n4Col=col+1;
    
    //horizontal
    while (gameArea[row][col] == gameArea[row][nCol])
    {
        acum++;
        nCol++;
    }
    while (gameArea[row][col] == gameArea[row][n2Col])
    {
        acum++;
        n2Col--;
    }
    if (acum > 3)
        return true;
    acum = 1;
    //vertical
    while (gameArea[row][col] == gameArea[nRow][col])
    {
        acum++;
        nRow++;
    }
    while (gameArea[row][col] == gameArea[n2Row][col])
    {
        acum++;
        n2Row--;
    }
    if (acum > 3)
        return true;
    acum = 1;
    //diagonales
    while (gameArea[row][col] == gameArea[pRow][pCol])
    {
        acum++;
        pRow--;
        pCol++;
        
    }
    while (gameArea[row][col] == gameArea[n1Row][n1Col])
    {
        acum++;
        n1Row++;
        n1Col--;
    }
    if (acum > 3)
        return true;
    acum = 1;
    while (gameArea[row][col] == gameArea[n3Row][n3Col])
    {
        acum++;
        n3Row--;
        n3Col--;
    }
    while (gameArea[row][col] == gameArea[n4Row][n4Col])
    {
        acum++;
        n4Row++;
        n4Col++;
    }

    if (acum == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool ganador = false;
    row=-1;
    clrscr();
    inicio();
    cout<<endl;
    gotoxy (0,4); signo_gato();
    cout << endl;
    do
    {   
        selCol();
        row = checkfila(col);
        if (row==-1)
        {
            cout << " selecciona otra columna: " <<endl;
        }
        else 
        {
            ponerJugada(row, col);
            clrscr();
            gotoxy (0,4); signo_gato();
            cout<<endl;
            ganador = esGanador(row, col);
            turno++;
        }
    } while (turno <= 42 && ganador == false );
    if (ganador == true)
    {
        if (turno%2==0){
            cout << "Felicidades ";
            cout << "\x1b[0;31m" << " Player 1" << "\x1b[0m"; 
            cout << ", has ganado ";
        }
        else 
        {
            cout << "Felicidades";
            cout << "\x1b[0;33m" << "Player 2" << "\x1b[0m";
            cout << ", has ganado";
        }
        
    }
    else 
    cout << "Empate :/";
    
    return 0;
}