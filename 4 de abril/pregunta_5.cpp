/*5. Escriba un programa que simule una calculadora con funciones básicasde suma, resta, divisióny multiplicación,
  el usuario deberáescoger que operaciónva a realizar*/

#include <iostream>
using namespace std;
//declaramos una funcion suma  
 void suma (int numero1, int numero2){ 
    int suma=0;
    suma=numero1+numero2;
    cout<<"la suma es : "<<suma<<endl;
     }
//declaramos una funcion multiplicacion
 void multiplicacion (int numero1, int numero2){ 
    int multiplicacion=0;
    multiplicacion=numero1*numero2;
    cout<<"la multiplicacion es "<<multiplicacion<<endl;
     }
//declaramos una funcion division
 void division (int numero1, int numero2){ 
    int division=0;
    division=numero1/numero2;
    cout<<"la division es "<<division<<endl;
     }

     //declaramos una funcion resta 
 void resta (int numero1, int numero2){ 
    int resta=0;
    resta=numero1-numero2;
    cout<<"la resta es "<<resta<<endl;
     }
 //utilizaremos un switch para que el usuario elija la operacion que desea realizar
    

int main(){/*en el int main declararemos nuevamente nuevamente nuestras variables , resultado , primer 
numero , 2do numero y el resultado*/
    int numero1,numero2, opcion , resultado=0;
    cout << "ingrese el primer numero:" << endl;
    cin >> numero1;
    cout << "ingrese el segundo numero:" << endl;
    cin >> numero2;
    cout << "ingrese opcion:" << endl;
    cin >> opcion;
    switch (opcion){
    case 1:
        suma(numero1,numero2);
        break;

    case 2:
        resta(numero1,numero2);
        break;

    case 3:
       multiplicacion(numero1,numero2);
        break;


    case 4:
       division(numero1,numero2);
        break;

    default:
        cout << "la opcion no es valida :" << endl<<resultado;
        break;
    }
    return 0;
 
}