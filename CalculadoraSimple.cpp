#include <iostream>
using namespace std;

int main()
{
    //Karla Estefany Hernandez Pocasangre

    //Declaracion de variables
    int dig1, dig2, suma, resta, mult, division;
    char opcion;

    //INgreso de datos
    cout << "Ingrese 2 digitos" << endl;
    cin >> dig1;
    cin >> dig2;

    //Menu
    cout << "\nMENU" << endl;
    cout << "Suma= +" << endl;
    cout << "Resta= -" << endl;
    cout << "Multiplicacion= *" << endl;
    cout << "Division= /" << endl;
    cout << "Elija una operacion: ";
    cin >> opcion;

    //Salida de Datos
    switch (opcion)
    {
    case '+':
        suma = dig1 + dig2;
        cout << "\nEl resultado de la suma es: " << suma << endl;
        break;
    case '-':
        resta = (dig1 - dig2);
        cout << "\nEl resultado de la resta es: " << resta << endl;
        break;
    case '*':
        mult = (dig1 * dig2);
        cout << "\nEl resultado de la multiplicacion es: " << mult << endl;
        break;
    case '/':
        division = (dig1 / dig2);
        cout << "\nEl resultado de la divison es: " << division << endl;
        break;
    default:
        cout << "\nIntrodusca un signo valido" << endl;
    }
    return 0;
}