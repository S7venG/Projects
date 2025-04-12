#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct Infraccion
{
    string placa;
    int zona;
    int limite_velocidad;
    int velocidad_vehiculo;
    float multa;
};

float calcularMulta(int limite, int velocidad)
{
    if (velocidad <= limite)
        return 0.0f;
    return 3.0f * (velocidad - limite);
}

void mostrarReporte(const vector<Infraccion> &infracciones)
{
    // Encabezado del reporte
    cout << "INFRACCIONES A LOS LIMITES DE VELOCIDAD\n\n";
    cout << "| VEHICULO | REG. | VELOCIDAD | MULTA |\n";
    cout << "|----------|------|-----------|-------|\n";

    // Variables para los totales por zona
    int totalZona1 = 0, totalZona2 = 0, totalZona3 = 0;
    float montoZona1 = 0.0f, montoZona2 = 0.0f, montoZona3 = 0.0f;

    // Mostrar cada infracción
    for (const auto &infra : infracciones)
    {
        // Formatear la salida para que coincida con el ejemplo
        cout << "| " << setw(8) << infra.placa << " | "
             << setw(3) << infra.zona << " | "
             << setw(8) << infra.velocidad_vehiculo << " | "
             << fixed << setprecision(2) << setw(8) << infra.multa << " |\n";

        // Acumular totales por zona
        switch (infra.zona)
        {
        case 1:
            totalZona1++;
            montoZona1 += infra.multa;
            break;
        case 2:
            totalZona2++;
            montoZona2 += infra.multa;
            break;
        case 3:
            totalZona3++;
            montoZona3 += infra.multa;
            break;
        }
    }

    // Mostrar totales por zona
    cout << "\nZONA 1 : TOTAL DE INFRACCIONES : " << totalZona1 << "\n";
    cout << "MONTO RECAUDADO EN MULTAS : " << fixed << setprecision(2) << montoZona1 << "\n\n";

    cout << "ZONA 2 : TOTAL DE INFRACCIONES : " << totalZona2 << "\n";
    cout << "MONTO RECAUDADO EN MULTAS : " << fixed << setprecision(2) << montoZona2 << "\n\n";

    cout << "ZONA 3 : TOTAL DE INFRACCIONES : " << totalZona3 << "\n";
    cout << "MONTO RECAUDADO EN MULTAS : " << fixed << setprecision(2) << montoZona3 << "\n";
}

int main()
{
    vector<Infraccion> infracciones;
    char continuar;

    do
    {
        Infraccion nueva;

        cout << "Ingrese los datos de la infraccion:\n";
        cout << "Numero de placa: ";
        cin >> nueva.placa;

        cout << "Zona (1, 2 o 3): ";
        cin >> nueva.zona;

        cout << "Limite de velocidad (km/h): ";
        cin >> nueva.limite_velocidad;

        cout << "Velocidad del vehiculo (km/h): ";
        cin >> nueva.velocidad_vehiculo;

        // Calcular la multa
        nueva.multa = calcularMulta(nueva.limite_velocidad, nueva.velocidad_vehiculo);

        infracciones.push_back(nueva);

        cout << "Desea ingresar otra infraccion? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    // Mostrar el reporte
    mostrarReporte(infracciones);

    system("pause");
    return 0;
}