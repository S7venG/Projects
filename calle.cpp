#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "   DETERMINAR EL LADO DE LA CALLE    " << endl;
    cout << "-----------------------------------" << endl;
    cout << "\nComience a ingresar los numeros de vivienda:" << endl;

    while (true)
    {
        cout << "\n> Ingrese un numero : ";
        cin >> numero;

        while (cin.fail() || numero < 0 || numero > 1000)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Entrada invalida. Ingrese un numero entre 1-1000 o 0 para salir: ";
            cin >> numero;
        }

        if (numero == 0)
        {
            cout << "\nSaliendo del programa..." << endl;
            break;
        }

        if (numero % 2 == 1)
        {
            cout << "   <-- IZQUIERDA " << endl;
        }
        else
        {
            cout << "   --> DERECHA " << endl;
        }
    }

    system("pause");
    return 0;
}