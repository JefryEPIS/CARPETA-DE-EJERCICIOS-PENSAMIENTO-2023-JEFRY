#include <iostream>

using namespace std;

int main()
{
    cout << "   ----------------------------------------------------" << endl;
    cout << "      Codigo de estudiante: 236851" << endl;
    cout << "      Nombres y Apellidos: Jefry Edinson Ramos Castillo" << endl;
    cout << "   ----------------------------------------------------" << endl;

    int numero;

    cout<<"Ingrese un numero entero positivo:"<<endl;
    cin>>numero;

    if(numero<=0)
    {
        cout<<"Tiene que ser positivo."<<endl;
        return 1;
    }

    for(int a=numero; a<2*numero; ++a)
    {
        cout<<a<<" ";

    }
    cout<<endl;
}
