#include<iostream>
#include<algorithm>
using namespace std;

/*funcion para hallar el numero mayor del arreglo*/
int numero_mayor(int arreglo[10],int tamaño){
    int mayor=arreglo[0];/*inicianizando el arreglo desde 0*/

   for (int i = 0; i < tamaño-1; i++)
    {
        if (arreglo[i+1]>mayor)
        {
            mayor=arreglo[i+1];
        }
       
    }
    return mayor;
}
/*funcion para hallar el numero menor del arreglo*/
int numero_menor(int arreglo[10],int tamaño){
    int menor=arreglo[0];
    
    for (int i = 0; i < tamaño-1; i++)/*para comparar */
    {
        if (arreglo[i+1]<menor)
        {
            menor=arreglo[i+1];
        }
    }
    return menor;
}
/*funcion para hallar o calcular los promedios */
int prom_arreg(int arreglo[10],int tamaño){
    int suma=0,promedio=0;

    for (int i = 0; i < tamaño; i++)
    {
        suma+=arreglo[i];
    }
    promedio=suma/tamaño;

    return promedio;

}
/*funcion para determinar la mediana*/
double mediana(int arreglo[10], int tamaño) {

    int vartemp;

    for (int i = 0; i < tamaño - 1; i++)
    {
        for (int j = 0; j < tamaño - i - 1; j++)
        {
            if (arreglo[j] > arreglo[j+1])
            {
                int varTemp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1]= varTemp;
            }
        }
    }
    

    if (tamaño % 2 != 0) {
        return (double)arreglo[tamaño / 2];
    }
    else {
        return (double)(arreglo[(tamaño - 1) / 2] + arreglo[tamaño / 2]) / 2;
    }

}
/*funcion para determinar las veces que se repite un numero en el arreglo*/
int repite(int arreglo[10],int tamaño){
    int cont,num_veces=1,num_repite;
    for (int i = 0; i < tamaño-1; i++)
    {
        cont=1;
        for (int j = i+1; j < tamaño; j++)
        {
            //evalua los numeros que se repiten del arreglo
            if (arreglo[i]==arreglo[j])
            {
                cont++;  //contador para las veces que se repite los numeros iguales del arreglo
                  
            }
  
        }
        if (cont>num_veces)
        {
            cont=num_veces;
            num_repite=arreglo[i];    
        } 
    }

    return num_repite;
    
}

int main(){
    int arreglo[10]={1,11,9,8,2,2,4,7,9,0};
    int tamaño=sizeof(arreglo)/sizeof(arreglo[0]);

    cout<<"El numero mayor es: "<<numero_mayor(arreglo,tamaño)<<endl;

    cout<<"El numero menor es: "<<numero_menor(arreglo,tamaño)<<endl;

    cout<<"El promedio del arrglo es: "<<prom_arreg(arreglo,tamaño)<<endl;
    
    cout<<"La mediana del arreglo es: "<<mediana(arreglo,tamaño)<<endl;

    cout<<"Elnumero que mas se repite es: "<<repite(arreglo,tamaño);
    
    return 0;
}