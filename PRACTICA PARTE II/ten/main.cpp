#include <iostream>

using namespace std;

int main()
{
    cout << "   ----------------------------------------------------" << endl;
    cout << "      Codigo de estudiante: 236851" << endl;
    cout << "      Nombres y Apellidos: Jefry Edinson Ramos Castillo" << endl;
    cout << "   ----------------------------------------------------" << endl;

    int numeros[6];
    int sumadenegativos=0;
    int cantidadpositivos=0;
    int sumadepositivos=0;

    cout<<"Ingrese 6 numeros enteros, pueden ser positivos y negativos: "<<endl;

    for(int a=0; a<6; ++a)
    {
        cout<<"numero"<<a+1<<": ";
        cin>>numeros[a];

        if(numeros[a]<0)
            {
            sumadenegativos += numeros[a];

        }
        else
            {

            sumadepositivos += numeros[a];
            cantidadpositivos++;

            }
    }

    cout<<"la sumatoria de numeros negativos es: "<<sumadenegativos<<endl;

    if(cantidadpositivos>0)
    {
        double promediodepositivos=static_cast<double>(sumadepositivos)/cantidadpositivos;
        cout<<"el promedio de los numeros positivos es: "<<promediodepositivos<<endl;

    }
    else{
        cout<<"no se ingresaron numeros positivos"<<endl;
    }

    return 0;
}
