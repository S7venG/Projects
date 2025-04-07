#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int numPartidas, sol;
    int respuesta = -1;
    int ini = 1;
    int fin = -1;

    cin >> numPartidas;

    for (int i = 0; i < numPartidas; i++)
    {
        bool encontrada = false;
        fin = -1;
        cin >> fin;

        int mitad = fin / 2;
        cout << mitad << endl;
        cout.flush();

        while (!encontrada && cin >> respuesta)
        {
            switch (respuesta)
            {
            case -1:
                fin = mitad;
                mitad = (fin + ini) / 2;
                cout << mitad << endl;
                cout.flush();
                break;
            case 1:
                ini = mitad;
                mitad = (fin + ini) / 2;
                cout << mitad << endl;
                cout.flush();
                break;
            case 0:
                sol = mitad;
                encontrada = true;
                break;
            default:
                // Respuesta no válida, podrías manejar el error aquí
                break;
            }
        }

        // Limpiar el buffer de entrada si es necesario
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    system("pause");
    return 0;
}
