#include <iostream>

using namespace std;

int main()
{
    cout << "   ----------------------------------------------------" << endl;
    cout << "      Codigo de estudiante: 236851" << endl;
    cout << "      Nombres y Apellidos: Jefry Edinson Ramos Castillo" << endl;
    cout << "   ----------------------------------------------------" << endl;

    int cantidad;
    int suma=0;

    cout<<"Ingrese la cantidad"<<endl;
    cin>>cantidad;

    for(int a=0; a<cantidad; ++a)
        {
        int numero;
    cout<<"Ingrese el numero"<<a+1<<": ";
    cin>>numero;

    suma += numero;

        }
    cout<<"La suma de los numeros ingresados es:" <<suma<<endl;

    return 0;
}
