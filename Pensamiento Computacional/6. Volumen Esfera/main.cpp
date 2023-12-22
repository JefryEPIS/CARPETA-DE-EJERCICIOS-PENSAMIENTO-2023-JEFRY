#include <iostream>

using namespace std;

int main()
{
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Codigo de Estudiante: 236851"<<endl;
    cout<<"Nombres y Apellidos: Jefry Edinson Ramos Castillo"<<endl;
    cout<<"------------------------------------------------------"<<endl;

    double PI,volumen,radio;

    PI=3.14159;

    cout<<"Ingrese el radio de la esfera: "<<endl;
    cin>>radio;

    volumen=(4.0/3.0)*PI*(radio*radio*radio);

    cout<<"El Volumen de la esfera es: "<<volumen<<endl;
}
