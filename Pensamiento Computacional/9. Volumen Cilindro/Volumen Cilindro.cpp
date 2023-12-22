#include <iostream>

using namespace std;

int main()
{
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Codigo de Estudiante: 236851"<<endl;
    cout<<"Nombres y Apellidos: Jefry Edinson Ramos Castillo"<<endl;
    cout<<"------------------------------------------------------"<<endl;

    double radio,altura,volumen,PI=3.14159;

    cout<<"Ingrese el Radio del Cilindro: "<<endl;
    cin>>radio;

    cout<<"Ingrese la Altura del Cilindro: "<<endl;
    cin>>altura;

    volumen=(altura)*(radio*radio)*PI;

    cout<<"El volumen del Cilindro es: "<<volumen<<endl;

}
