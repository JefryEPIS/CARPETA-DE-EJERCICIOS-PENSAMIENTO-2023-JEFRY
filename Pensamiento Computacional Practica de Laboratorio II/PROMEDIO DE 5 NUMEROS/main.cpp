#include <iostream>

using namespace std;

int main()
{
    cout << "   ----------------------------------------------------" << endl;
    cout << "      Codigo de estudiante: 236851" << endl;
    cout << "      Nombres y Apellidos: Jefry Edinson Ramos Castillo" << endl;
    cout << "   ----------------------------------------------------" << endl;

    double edad1,edad2,edad3,edad4,edad5,promedio;

    cout<<"ingrese 5 edades"<<endl;
    cin>>edad1>>edad2>>edad3>>edad4>>edad5;

    promedio=(edad1+edad2+edad3+edad4+edad5)/5;
    cout<<"el promedio es: "<<promedio<<endl;
}
