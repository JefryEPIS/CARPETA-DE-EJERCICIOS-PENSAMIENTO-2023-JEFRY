#include <iostream>

using namespace std;

int main()
{
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Codigo de Estudiante: 236851"<<endl;
    cout<<"Nombres y Apellidos: Jefry Edinson Ramos Castillo"<<endl;
    cout<<"------------------------------------------------------"<<endl;

    double base,altura_p,altura_b,volumen,area_b;

    cout<<"Ingrese la base del triangulo de la piramide: "<<endl;
    cin>>base;

    cout<<"Ingrese la altura del triangulo de la piramide: "<<endl;
    cin>>altura_b;

    cout<<"Ingrese la altura de la piramide: "<<endl;
    cin>>altura_p;

    area_b=(base*altura_b)/2;

    volumen=(1.0/3.0)*area_b*altura_p;

    cout<<"El Volumen de la piramide es: "<<volumen<<endl;
}
