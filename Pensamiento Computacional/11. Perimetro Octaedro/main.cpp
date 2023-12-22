#include <iostream>

using namespace std;

int main()
{
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Codigo de Estudiante: 236851"<<endl;
    cout<<"Nombres y Apellidos: Jefry Edinson Ramos Castillo"<<endl;
    cout<<"------------------------------------------------------"<<endl;

    double lado_tri,perimetro;

    cout<<"Ingrese la distancia de un triangulo del octaedro: "<<endl;
    cin>>lado_tri;

    perimetro=((lado_tri*3)*8);

    cout<<"El perimetro del octaedro es: "<<perimetro<<endl;
}
