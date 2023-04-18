#include<iostream>
using namespace std;


void primo (int numero) {
    bool esPrimo = true;

    // Verificamos si el número es primo
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            esPrimo = false;
            break;
        }
    }

    // Mostramos el resultado
    if (esPrimo){
        cout << numero << " es un número primo" << endl;
    }
    else{
        cout << numero << " no es un número primo" << endl;

    }
}

 void par_impar(int numero){
  if (numero/2==0){
    cout<<"el numero es par ";
  }
  else{
    cout<<"el numero es impar";
  }
  
 }

 int main(){
    int numeros=0;
    cout<<"ingrese el numero";
    cin>>numeros;

    par_impar(numeros);
    cout<<endl;
    primo(numeros);
    //cout<<"el numero :"<<numeros<<par_impar(numeros);
 
 return 0;
 }
