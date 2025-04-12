#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int infraccionesZona[3] = {0};
    float multasZona[3] = {0};

    cout << "INFRACCIONES A LOS LIMITES DE VELOCIDAD\n\n";
    cout << "| VEHICULO | REG. | VELOCIDAD | MULTA    |\n";
    cout << "|----------|------|-----------|----------|\n";

    char continuar;
    do
    {
        string placa;
        int zona, lim, velocidad;

        cout << "\nPlaca: ";
        cin >> placa;
        cout << "Zona (1, 2 o 3): ";
        cin >> zona;
        cout << "Limite velocidad(km/h): ";
        cin >> lim;
        cout << "Velocidad vehiculo(km/h): ";
        cin >> velocidad;

        float multa = 0;
        if (velocidad > lim)
        {
            multa = 3.0 * (velocidad - lim);
        }

        cout << "| " << setw(8) << placa << " | "
             << setw(3) << zona << " | "
             << setw(8) << velocidad << " | "
             << fixed << setprecision(2) << setw(8) << multa << " |\n";

        if (zona >= 1 && zona <= 3)
        {
            infraccionesZona[zona - 1]++;
            multasZona[zona - 1] += multa;
        }

        cout << "Ingresar otra infraccion? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    cout << "\nZONA 1: TOTAL DE INFRACCIONES: " << infraccionesZona[0]
         << "\nMONTO RECAUDADO: " << fixed << setprecision(2) << multasZona[0] << "\n";

    cout << "\nZONA 2: TOTAL DE INFRACCIONES: " << infraccionesZona[1]
         << "\nMONTO RECAUDADO: " << multasZona[1] << "\n";

    cout << "\nZONA 3: TOTAL DE INFRACCIONES: " << infraccionesZona[2]
         << "\nMONTO RECAUDADO: " << multasZona[2] << "\n";

    system("pause");
    return 0;
}