#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "   ----------------------------------------------------" << endl;
    cout << "      Codigo de estudiante: 236851" << endl;
    cout << "      Nombres y Apellidos: Jefry Edinson Ramos Castillo" << endl;
    cout << "   ----------------------------------------------------" << endl;

    double a,b,c,resultado;

    cout<<"ingrese los 3 valores, de a,b y c"<<endl;
    cin>>a>>b>>c;

    resultado=-b+sqrt((b*b)-4*a*c)/2*a;

    cout<<"el resultado es:"<<resultado<<endl;
}
