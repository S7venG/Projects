#include <iostream>
using namespace std;

int main()
{
    double masa, energia;
    const double v_luz = 2.99792458e10;

    cout << "   CALCULADORA DE ENERGIA " << endl;
    cout << "--------------------------------" << endl;
    cout << "Ingrese la masa en gramos: ";
    cin >> masa;

    energia = masa * v_luz * v_luz;

    cout << "\nLa energia producida es: " << energia << " ergios" << endl;
    cout << "--------------------------------" << endl;

    system("pause");
    return 0;
}