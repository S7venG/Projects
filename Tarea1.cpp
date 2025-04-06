#include <iostream>
using namespace std;

int main()
{
    double m1, m2, distancia, fuerza;
    const double G = 0.00000006673;

    cout << "**********Calculadora de fuerza gravitacional**********\n"
         << endl;
    cout << "Ingrese la masa del primer cuerpo (gr): ";
    cin >> m1;

    cout << "Ingrese la masa del segundo cuerpo (gr): ";
    cin >> m2;

    cout << "Ingrese la distancia entre ellos (cm): ";
    cin >> distancia;

    fuerza = (G * m1 * m2) / (distancia * distancia);

    cout << "La fuerza de atraccion es: " << fuerza << " dinas" << endl;
    cout << "\n******************************************************" << endl;
    system("pause");

    return 0;
}