#include <iostream>
#include <string>
using namespace std;

int main()
{

    string descripcion;
    int unidades;
    double costo;

    const double precio_MATERIALES = 3.5;
    const double FIJO = 10000.0;

    cout << "CALCULADORA DE COSTO DE PRODUCCION" << endl;
    cout << "-----------------------------------" << endl;

    cout << "Ingrese la descripcion del articulo: ";
    getline(cin, descripcion); // Permite espacios

    cout << "Ingrese el numero de unidades producidas: ";
    cin >> unidades;

    costo = (unidades * precio_MATERIALES) + FIJO;

    cout << "\nRESUMEN DE PRODUCCION" << endl;
    cout << "Articulo: " << descripcion << endl;
    cout << "Unidades producidas: " << unidades << endl;
    cout << "Costo total de produccion: " << costo << endl;
    cout << "-----------------------------------" << endl;

    system("pause");
    return 0;
}