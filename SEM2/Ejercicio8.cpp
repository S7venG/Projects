#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    const int materiales_por_unidad[6] = {3, 4, 1, 2, 3, 2};
    float costos_materiales[6] = {0};
    int total_materiales[6] = {0};
    float costos_totales[6] = {0};
    float costo_total_general = 0;

    cout << "INGRESE LOS COSTOS DE LOS MATERIALES:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "Costo del Material " << (i + 1) << ": ";
        cin >> costos_materiales[i];
    }

    int unidades;
    char continuar;
    do
    {
        cout << "\nCantidad de unidades del Producto A en este pedido: ";
        cin >> unidades;

        for (int i = 0; i < 6; i++)
        {
            total_materiales[i] += unidades * materiales_por_unidad[i];
            costos_totales[i] = total_materiales[i] * costos_materiales[i];
        }

        cout << "Desea ingresar otro pedido? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    for (int i = 0; i < 6; i++)
    {
        costo_total_general += costos_totales[i];
    }

    cout << "\n\n| MATERIAL | LISTADO DE MATERIALES REQUERIDOS CANTIDAD DE UNIDADES | COSTO ESTIMADO |\n";
    cout << "|----------|-----------------------------------------------------|----------------|\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "| " << setw(8) << (i + 1) << " | "
             << setw(51) << total_materiales[i] << " | "
             << fixed << setprecision(2) << setw(13) << costos_totales[i] << " |\n";
    }

    cout << "\nCOSTO TOTAL    " << fixed << setprecision(2) << setw(13) << costo_total_general << endl;

    system("pause");
    return 0;
}