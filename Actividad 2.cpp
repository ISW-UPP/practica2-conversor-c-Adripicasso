// Actividad 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()

{
    {
        cout << "MENU DE CONVERSOR";
        cout << "\n1.-Monedas";
        cout << "\n2.-Distancia";
        cout << "\n3.-Peso";

        cout << "\n";

        int opcion_menu;
        cout << "\nQue quieres realizar: ";
        cin >> opcion_menu;

        cout << "\n";

        switch (opcion_menu)
        {
        case 1:
            float peso_mxn;
            cout << "\nIngresa la cantidad en peso mexicano: ";
            cin >> peso_mxn;

            cout << "\n";

            cout << "MENU DE CONVERSOR DE MONEDAS";
            cout << "\n1.-Euro";
            cout << "\n2.-Dolar";
            cout << "\n3.-Libra";
            cout << "\n4.-Franco Suizo";
            cout << "\n5.-Peso Uruguayo";

            cout << "\n";

            int opcion_monedas;
            cout << "\nQue quieres realizar: ";
            cin >> opcion_monedas;

            switch (opcion_monedas)
            {
            case 1:
                cout << "La cantidad de " << peso_mxn << " MXN a Euros es: " << peso_mxn * 0.048885;
                break;
            case 2:
                cout << "La cantidad de " << peso_mxn << " MXN a Dolares es: " << peso_mxn * 0.053;
                break;
            case 3:
                cout << "La cantidad de " << peso_mxn << " MXN a Libras es: " << peso_mxn * 0.043;
                break;
            case 4:
                cout << "La cantidad de " << peso_mxn << " MXN a Franco Suizo es: " << peso_mxn * 0.049;
                break;
            case 5:
                cout << "La cantidad de " << peso_mxn << " MXN a Peso Uruguayo es: " << peso_mxn * 2.08;
                break;
            default: cout << "Opcion erronea";
                break;
            }
            break;

        case 2:
            float kms;
            cout << "\nIngresa la cantidad de kilometros: ";
            cin >> kms;

            cout << "\n";

            cout << "MENU DE CONVERSOR DE DISTANCIA";
            cout << "\n1.-in";
            cout << "\n2.-ft";
            cout << "\n3.-cm";
            cout << "\n4.-nm";
            cout << "\n5.-ly";

            cout << "\n";

            int opcion_distancia;
            cout << "\nQue quieres realizar: ";
            cin >> opcion_distancia;

            switch (opcion_distancia)
            {
            case 1:
                cout << "La cantidad de " << kms << " kms a pulgadas (in) es: " << kms * 39370.1;
                break;
            case 2:
                cout << "La cantidad de " << kms << " kms a pies (ft) es: " << kms * 3280.84;
                break;
            case 3:
                cout << "La cantidad de " << kms << " kms a centimetros (cm) es: " << kms * 100000;
                break;
            case 4:
                cout << "La cantidad de " << kms << " kms a nanometros (nm) es: " << kms * 1e+12;
                break;
            case 5:
                cout << "La cantidad de " << kms << " kms a nanometros (nm) es: " << kms * 1.056970721911E-13;
                break;
            default: cout << "Opcion erronea";
                break;
            }
            break;

        case 3:
            float kgs;
            cout << "\nIngresa la cantidad de kilogramos: ";
            cin >> kgs;

            cout << "\n";

            cout << "MENU DE CONVERSOR DE PESO";
            cout << "\n1.-ton";
            cout << "\n2.-oz";
            cout << "\n3.-lb";
            cout << "\n4.-ug";
            cout << "\n5.-tg";

            cout << "\n";

            int opcion_peso;
            cout << "\nQue quieres realizar: ";
            cin >> opcion_peso;

            switch (opcion_peso)
            {
            case 1:
                cout << "La cantidad de " << kgs << " kgs a toneladas (ton) es: " << kgs * 0.001;
                break;
            case 2:
                cout << "La cantidad de " << kgs << " kgs a onzas (oz) es: " << kgs * 35.274;
                break;
            case 3:
                cout << "La cantidad de " << kgs << " kgs a libras (lb) es: " << kgs * 2.20462;
                break;
            case 4:
                cout << "La cantidad de " << kgs << " kgs a microgramos (ug) es: " << kgs * 1e+9;
                break;
            case 5:
                cout << "La cantidad de " << kgs << " kgs a teragramos (tg) es: " << kgs * 1e-9;
                break;
            default: cout << "Opcion erronea";
                break;
            }
            break;

        default: cout << "Opcion erronea";
            break;
        }
    }
}


