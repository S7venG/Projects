#include <iostream>
using namespace std;

int main()
{

    double ft;
    const int plgXft = 12;
    const double yrdXft = 1.0 / 3.0;
    const double cmXplg = 2.54;
    const double mXcm = 0.01;

    cout << "CONVERSOR DE UNIDADES DE LONGITUD" << endl;
    cout << "----------------------------------" << endl;
    cout << "Ingrese la medida en pies: ";
    cin >> ft;

    double yardas = ft * yrdXft;
    int pulgadas = ft * plgXft;
    double centimetros = pulgadas * cmXplg;
    double metros = centimetros * mXcm;

    cout << "\nRESULTADOS DE CONVERSION:" << endl;
    cout << ft << " pies equivalen a:" << endl;
    cout << "- " << yardas << " yardas" << endl;
    cout << "- " << pulgadas << " pulgadas" << endl;
    cout << "- " << centimetros << " cm" << endl;
    cout << "- " << metros << " m" << endl;

    system("pause");
    return 0;
}