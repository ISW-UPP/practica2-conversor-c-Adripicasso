// Actividad 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "ingrese 10 numeros ";
    int numeros[10];
    int i = 0;
    float suma = 0;
    int nm = 0;
    int x = 0;
    int op;
    for (i = 1; i < 11; i++)
    {
        cout << i;
        cin >> numeros[i];
    }
    cout << "eliga la opcion que quiere (1)mostrar del ultimo al primero (2) mostrar media aritmetica (3) mostar el mayor";
    cin >> op;
    switch (op)
    {
    case 1:
        for (i = 10; i > 0; i--)
        {
            cout << numeros[i];
        }
        break;


    case 2:
        for (i = 1; i < 11; i++)
        {
            suma += numeros[i];
        }
        cout << suma / 10;
        break;
    case 3:
        for (i = 1; i < 11; i++)
        {

            if (numeros[i] > nm) {
                nm = numeros[i];
                x = i;
            }
        }
        cout << " posicion: " << x << " numero:  " << nm;
        break;
    }
}