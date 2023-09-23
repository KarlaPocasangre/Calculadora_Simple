#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declaracion de variables
    float dig1, dig2, suma, resta, mult, division, potenciacion, radicacion1, radicacion2;
    char opcion;

    // INgreso de datos
    cout << "Ingrese 2 digitos" << endl;
    cin >> dig1;
    cin >> dig2;

    // Menu
    cout << "\nMENU" << endl;
    cout << "Suma= +" << endl;
    cout << "Resta= -" << endl;
    cout << "Multiplicacion= *" << endl;
    cout << "Division= /" << endl;
    cout << "Potenciacion= p" << endl;
    cout << "Radicacion= r" << endl;
    cout << "Elija una operacion: ";
    cin >> opcion;

    // Salida de Datos
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
    case 'p':
        potenciacion = pow(dig1, dig2);
        cout << "\nEl resultado de " << dig1 << " Potenciado a " << dig2 << " es: " << potenciacion << endl;
        break;
    case 'r':
        radicacion1 = sqrt(dig1);
        radicacion2 = sqrt(dig2);
        cout << "\nEl resultado de " << dig1 << " es: " << radicacion1 << endl;
        cout << "El resultado de " << dig2 << " es: " << radicacion2 << endl;
        break;
    default:
        cout << "\nIntrodusca un signo valido" << endl;
    }
    return 0;
}