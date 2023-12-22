#include <iostream>

using namespace std;

bool esVocal(char letra)
letra = tolower(letra);
    return (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u');
int main()

{
    cout << "   ----------------------------------------------------" << endl;
    cout << "      Codigo de estudiante: 236851" << endl;
    cout << "      Nombres y Apellidos: Jefry Edinson Ramos Castillo" << endl;
    cout << "   ----------------------------------------------------" << endl;

    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int contadorVocales = 0;

    for (char letra : frase) {
        if (esVocal(letra)) {
            contadorVocales++;
        }
    }

    cout << "La cantidad de vocales en la frase es: " << contadorVocales << endl;

    return 0;

}
