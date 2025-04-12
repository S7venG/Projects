#include <iostream>
#include <string>
#include <iomanip> // para mostrar solo 2 decimales
using namespace std;

int main()
{

    string alumno;
    double nota1, nota2, nota3, nota4;
    double promedio;

    const double PORC1 = 0.30;
    const double PORC2 = 0.20;
    const double PORC3 = 0.10;
    const double PORC4 = 0.40;

    cout << "CALCULADORA DE PROMEDIO PONDERADO" << endl;
    cout << "---------------------------------" << endl;

    cout << "Ingrese el nombre del alumno: ";
    getline(cin, alumno);

    cout << "Ingrese la nota 1: ";
    cin >> nota1;

    cout << "Ingrese la nota 2: ";
    cin >> nota2;

    cout << "Ingrese la nota 3: ";
    cin >> nota3;

    cout << "Ingrese la nota 4: ";
    cin >> nota4;

    promedio = (nota1 * PORC1) + (nota2 * PORC2) + (nota3 * PORC3) + (nota4 * PORC4);

    cout << fixed << setprecision(2);
    cout << "\nREPORTE DE NOTAS" << endl;
    cout << "Nombre del alumno(a): " << alumno << endl;
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << ", " << nota4 << endl;
    cout << "Promedio ponderado: " << promedio << endl;
    cout << "---------------------------------" << endl;

    system("pause");
    return 0;
}