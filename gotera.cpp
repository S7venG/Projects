#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
    int casos;

    cout << "   CALCULAR EL TIEMPO DE GOTERAS  " << endl;
    cout << "--------------------------------------" << endl;
    cout << "\nEste programa calcula el tiempo (HH:MM:SS) que puedes estar sin cambiar el cubo." << endl;
    cout << "\nIngrese el numero de casos a evaluar: ";
    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        int segundos_totales;

        cout << "\n--- Caso " << (i + 1) << " ---" << endl;
        cout << "Ingrese el numero de segundos: ";

        while (!(cin >> segundos_totales))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: Debe ingresar un numero valido. Intente nuevamente: ";
        }

        if (segundos_totales >= 86400)
        {
            cout << "ERROR: El tiempo excede el maximo de 23:59:59 (1 dia completo)" << endl;
            continue;
        }

        int horas = segundos_totales / 3600;
        int minutos = (segundos_totales % 3600) / 60;
        int segundos = segundos_totales % 60;

        cout << "Tiempo calculado: ";
        cout << setw(2) << setfill('0') << horas << ":";
        cout << setw(2) << setfill('0') << minutos << ":";
        cout << setw(2) << setfill('0') << segundos << endl;
    }

    system("pause");
    return 0;
}