#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct Empleado
{
    string nombre;
    float sueldo_anterior, sueldo_actual;
    int tipo_empleado;
};

float calcularAumento(float sueldo, int tipo)
{
    switch (tipo)
    {
    case 1:
        return sueldo * 0.05;
    case 2:
        return sueldo * 0.07;
    case 3:
        return sueldo * 0.10;
    case 4:
        return sueldo * 0.14;
    case 5:
        return sueldo * 0.18;
    default:
        return 0;
    }
}

void mostrarReporte(const vector<Empleado> &empleados)
{
    float total_anterior = 0, total_actual = 0;

    cout << "| NOMBRE              | AUMENTOS DE SUELDOS SUELDO ANTERIOR | SUELDO ACTUAL |\n";
    cout << "|---------------------|-------------------------------------|---------------|\n";

    for (const auto &emp : empleados)
    {
        cout << "| " << left << setw(19) << emp.nombre << " | "
             << right << setw(35) << fixed << setprecision(2) << emp.sueldo_anterior << " | "
             << setw(13) << emp.sueldo_actual << " |\n";

        total_anterior += emp.sueldo_anterior;
        total_actual += emp.sueldo_actual;
    }

    cout << "\nTOTAL    " << setw(15) << total_anterior << "    " << setw(15) << total_actual << endl;
}

int main()
{
    vector<Empleado> empleados;
    char continuar;

    do
    {
        Empleado emp;

        cout << "\nIngrese los datos del empleado:\n";
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, emp.nombre);

        cout << "Sueldo mensual: ";
        cin >> emp.sueldo_anterior;

        cout << "Tipo de empleado (1-5): ";
        cin >> emp.tipo_empleado;

        float aumento = calcularAumento(emp.sueldo_anterior, emp.tipo_empleado);
        emp.sueldo_actual = emp.sueldo_anterior + aumento;

        empleados.push_back(emp);

        cout << "Desea ingresar otro empleado? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    mostrarReporte(empleados);

    system("pause");
    return 0;
}