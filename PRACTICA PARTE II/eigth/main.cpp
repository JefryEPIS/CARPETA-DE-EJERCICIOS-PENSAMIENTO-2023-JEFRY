#include <iostream>

using namespace std;

int main()
{
    cout << "   ----------------------------------------------------" << endl;
    cout << "      Codigo de estudiante: 236851" << endl;
    cout << "      Nombres y Apellidos: Jefry Edinson Ramos Castillo" << endl;
    cout << "   ----------------------------------------------------" << endl;

    int adicion=0;

    for(int a=0; a<=100; ++a)
    {
        adicion += a;
    }
    cout<<"La suma de los numeros entre 0 y 100 es: "<<adicion<<endl;

    return 0;
}
