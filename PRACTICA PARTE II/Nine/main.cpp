#include <iostream>

using namespace std;

int main()
{
    cout << "   ----------------------------------------------------" << endl;
    cout << "      Codigo de estudiante: 236851" << endl;
    cout << "      Nombres y Apellidos: Jefry Edinson Ramos Castillo" << endl;
    cout << "   ----------------------------------------------------" << endl;

    int suma = 0;

    for(int a=0; a<=100; a+=3)
    {
        suma += a;
    }
    cout<<"La suma de multiplos de 3 entre 0 y 100 es:"<<suma<<endl;

    return 0;
}
