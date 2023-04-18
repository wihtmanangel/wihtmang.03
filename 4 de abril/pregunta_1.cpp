#include<iostream>
using namespace std;

//funcion para suma de los numeros pares de un arreglo
int suma_pares(int arreglo[19],int tamaño){
    int suma_par=0;
    
    for (int j = 1; j <=tamaño; j++)
    {
        if (arreglo[j]%2==0)/*if para la determinar los numeros pares */
        {
            suma_par=suma_par+arreglo[j];
        }
     
        
    }
    return suma_par;
}
/*funcion para suma de numeros impares */
int suma_impares(int arreglo1[19], int tamaño) {
    int suma_impar = 0;/*inicializamos en 0 ya que toda operacion se realiza de derecha a izquierda*/
    
    for (int j = 0; j < tamaño; j++) {
        if (arreglo1[j] % 2 == 1) {/*utilizamos if para determinar los numeros impares */
            suma_impar += arreglo1[j];/*sumamos todos los impares del arreglo*/
        }        
        
    }
    return suma_impar;
}


int main(){
    int numeros[19]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int tamaño1=sizeof(numeros)/sizeof(numeros[0]);

    cout<<"La suma de los numero pares es: "<<endl<<suma_pares(numeros,tamaño1)<<endl;

   cout<<"La suma de los numeros impares: "<<endl<<suma_impares(numeros,tamaño1)<<endl;
    return 0;
}