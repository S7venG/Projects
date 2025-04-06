#include <iostream>
using namespace std;

int main()
{

    const double v_LUZ = 300000.0;

    double time;
    double distancia;

    cout << "CALCULADORA DE DISTANCIA RECORRIDA POR LA LUZ" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Ingrese el tiempo en segundos: ";
    cin >> time;

    distancia = v_LUZ * time;

    cout << "\nRESULTADO:" << endl;
    cout << "La luz recorre " << distancia << " kilometros en " << time << " segundos" << endl;
    cout << "--------------------------------------------" << endl;

    system("pause");
    return 0;
}