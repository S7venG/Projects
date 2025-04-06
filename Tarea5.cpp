#include <iostream>
using namespace std;

int main()
{
    double ancho, largo, precio_por_metro, area, total;

    cout << "CALCULADORA DE COSTO DE TERRENO" << endl;
    cout << "--------------------------------" << endl;

    cout << "Ingrese el ancho del terreno (m): ";
    cin >> ancho;

    cout << "Ingrese el largo del terreno (m): ";
    cin >> largo;

    cout << "Ingrese el costo por metro cuadrado: ";
    cin >> precio_por_metro;

    area = ancho * largo;
    total = area * precio_por_metro;

    cout << "\nRESULTADOS:" << endl;
    cout << "Area del terreno: " << area << " metros cuadrados" << endl;
    cout << "Costo total del terreno: " << total << endl;

    cout << "--------------------------------" << endl;
    system("pause");
    return 0;
}