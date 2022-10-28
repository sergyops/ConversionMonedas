#include <iostream>
using namespace std;

int conversor(double valorconversion, string moneda) {

    double cantidad;

    cout << "Has elegido " << moneda << "\n";
    cout << "Indique la cantidad en Euros: ";
    cin >> cantidad;
    while (cantidad <= 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Debes escribir una cantidad numérica mayor que 0\n";
        cin >> cantidad;
    }
    cout.precision(8);
    cout << cantidad * valorconversion << " " << moneda;

    return 0;

}

int main()
{

    int moneda;
    

    setlocale(LC_ALL, "es_ES.UTF-8"); //Configuración regional (para imprimir bien las tildes)

    cout << "--------------------- CONVERSOR ---------------------\n\n";
    cout << "Indique el tipo de moneda escribiendo el número:\n\n";
    cout << "1.Dólar americano 2.Libra esterlina 3.Yen japonés 4.Franco suizo\n";
    cout << "5.Peso mexicano 6.Corona sueca 7.Yuan chino\n\n";
    cout << "--------------------- CONVERSOR ---------------------\n\n";
    cout << "Moneda: ";
    cin >> moneda;

    while (moneda <= 0 || moneda > 7)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Opción no válida seleccione una opción indicando un número del 1 al 7\n";
        cin >> moneda;
    }

    switch (moneda)
    {
    case 1:

        conversor(1.002745, "Dólares americanos");
        break;

    case 2:

        conversor(0.86629578, "Libra esterlina");
        break;

    case 3:

        conversor(147.45648, "Yen japonés");
        break;

    case 4:
        
        conversor(0.99219048, "Franco suizo");
        break;

    case 5:

        conversor(19.871196, "Peso mexicano");
        break;
    
    case 6:

        conversor(10.940591, "Corona sueca");
        break;

    case 7:

        conversor(7.1936618, "Yuan chino");
        break;

    default:

        cout << " ***** ERROR ***** ";
        break;
    }
}