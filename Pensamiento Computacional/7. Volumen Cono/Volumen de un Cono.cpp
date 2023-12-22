#include <iostream>

using namespace std;

int main()
{
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Codigo de Estudiante: 236851"<<endl;
    cout<<"Nombres y Apellidos: Jefry Edinson Ramos Castillo"<<endl;
    cout<<"------------------------------------------------------"<<endl;

    double radio,altura,volumen,PI=3.14159;

    cout<<"Ingrese el radio del Cono: "<<endl;
    cin>>radio;
    cout<<"Ingrese la altura del Cono: "<<endl;
    cin>>altura;

    volumen=PI*(1.0/3.0)*(radio*radio)*altura;

    cout<<"El volumen del cono es: "<<volumen<<endl;
}
