#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    char a[] = "sida";
    string texto = "Universidad";
    string texto2("HolA");

    cout    << "--------------------"   <<endl;
    cout    << "Contenido: "    << texto << endl;
    cout    << "length: "       << texto.length() << endl;
    cout    << "compare: "      << texto.compare("universidad") << endl;
    cout    << "find: "         << texto.find(a) << endl;
    cout    << "substr: "       << texto.substr(0, 4) << endl;
    cout    << "find_last: "    << texto.find_last_of("i") << endl;
    cout    << "replace: "      << texto.replace(6, 5, "vih") << endl;
    texto = texto + ".";
    cout    << "concatenar: "   << texto << endl;
    texto.clear();
    cout    << "Clear: "        << texto << endl;
    texto.swap(texto2);
    cout    << "--------------------"   <<endl;

    return 0;
}