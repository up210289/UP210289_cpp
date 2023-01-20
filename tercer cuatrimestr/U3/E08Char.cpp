
#include <iostream>
#include<cstring>   //c++
// #include<string.h>   c nativo
using namespace std;

int main()
{
    char letra = 'A';
    char texto[30] = "uni10ver20sida41d";

    for (int i = 0; texto[i] != '\0'; i++)
    {
        cout << texto[i] << " ";
    }
    cout << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e'|| texto[i] == 'i'|| texto[i] == 'o'|| texto[i] == 'u')
        {
            cout << texto[i];
        }
    }
    cout << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (isdigit(texto[i]))
        {
            cout << texto[i];
        }
        
    }
    /*cout << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (isdigit(texto[i]))
        {
            cout << ;
        }
        
    }*/
    cout << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (islower(texto[i]))
        {
            texto[i] = toupper(texto[i]);
            cout << texto[i];
        }
    }
    strcat(texto, " la mejor");
    cout << texto << endl;
}

//Regresar el numero de palabras en una cadena
int main()
{
    char texto[30] = "hola amigos mios";
    for (int i = 0; texto[i] != '\0'; i++)
    {
        strcat(texto, " ");
    }
}