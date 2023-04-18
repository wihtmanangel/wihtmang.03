#include <iostream>
using namespace std;

int suma(int numero1, int numeros2)
{
    int suma = 0;
    suma = numero1 + numeros2;
    cout<<"la suma es: "<<endl;
    return suma;
}

int resta(int numero1, int numeros2)
{
    int resta = 0;
    resta = numero1 - numeros2;
    cout<<"la resta es:"<<endl;
    return resta;
}
int division(int numero1 ,int numeros2)
{
    int division = 0;
//     division = numero1 / numeros2;
    if (numeros2 == 0)
    {
        cout << "numero indeterminado";
    
    }
    else{
        division=numero1/numeros2;
    }
    cout<<"la division es :"<<endl;
    return division;
}

int multiplicacion(int numero1 ,int numeros2)
{
    int multiplicacion = 0;
    multiplicacion = numero1 * numeros2;
    cout<<"la multplicacion es :"<<endl;
    return multiplicacion;
}
int main()
{ 
    int numero1, numeros2;

    cout << "ingrese el primer numero"<<endl;
    cin >> numero1;

    cout << "ingrese el segundo numero"<<endl;
    cin >> numeros2;

    
    cout<<division(numero1, numeros2)<<"\n";
    cout<<suma(numero1, numeros2)<<"\n";
    cout<<resta(numero1, numeros2)<<"\n";
    cout<<multiplicacion(numero1, numeros2)<<"\n";

    return 0;
}