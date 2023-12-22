#include <iostream>

using namespace std;

int main()
{
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Codigo de Estudiante: 236851"<<endl;
    cout<<"Nombres y Apellidos: Jefry Edinson Ramos Castillo"<<endl;
    cout<<"------------------------------------------------------"<<endl;

    int numero1,numero2,suma,resta,multiplicacion,division,modulo;

    cout<<"Ingrese el Primer Numero:"<<endl;
    cin>>numero1;
    cout<<"Ingrese el Segundo Numero:"<<endl;
    cin>>numero2;

    //suma

    suma=numero1+numero2;
    cout<<"La Suma es:"<<suma<<endl;

    //resta

    resta=numero1-numero2;
    cout<<"La Resta es:"<<resta<<endl;

    //multiplicacion

    multiplicacion=numero1*numero2;
    cout<<"La Multiplicacion es:"<<multiplicacion<<endl;

    //division

    division=numero1/numero2;
    cout<<"La Division es:"<<division<<endl;

    //modulo

    modulo=numero1%numero2;
    cout<<"El Modulo es:"<<modulo<<endl;

    if(modulo==0)
        {cout<<"No tiene residuo"<<endl;}

}
