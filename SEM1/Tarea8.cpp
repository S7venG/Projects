#include <iostream>
using namespace std;

int main()
{

    double x, y;

    cout << "           CALCULADORA " << endl;
    cout << "----------------------------------" << endl;
    cout << "Ingrese el valor de X: ";
    cin >> x;

    y = (3 * x * x) + (7 * x) - 15;

    cout << "\nRESULTADO:" << endl;
    cout << "Para X = " << x << ", el valor de Y es: " << y << endl;
    cout << "----------------------------------" << endl;

    system("pause");
    return 0;
}