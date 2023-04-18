#include<iostream>
using namespace std;
int main(){
 int n[5];
 int tamaño=sizeof(n)/sizeof(n[0]);
 for(int i=0; i<tamaño;i++){
    cout<<"ingrese valor:";cin>>n[i];
    }

    int menor=n[0];
    //bucle para encontrar el numero menor 
    for(int i=1 ;i<tamaño;i++)
    {
    if(n[i]<menor)
    {
        menor=n[i];
    }
    }


    int mayor=n[0];
    //bucle para encontrar el numero mayor
    for(int i=0; i<tamaño; i++)
    {
    if (n[i]>mayor){
        mayor=n[i];
    }
    }


    int repite;
    int admi=0;
    //bucle para ver el valor que se repite
    for(int i=0; i<tamaño; i++)
    {
    for(int j=i+1; j<tamaño;j++){
        if(n[i]==n[j]){
            admi++;
            repite=n[i];
             cout<<"el valor que se repite es:"<<repite<<endl;
             admi=0;

            
            
        }
    }
    }
    //funcion para suma los valores dados
    int suma=0;
    for(int i=0; i<tamaño; i++){
    suma=suma+n[i];
    
    }

    //bucle para ordenar de menor a mayor 
   for (int i = 0; i< tamaño- 1; i++) {
      for (int j = i + 1; j < 5; j++) {
         if (n[i] > n[j]) {
            int temp = n[i];
            n[i] = n[j];
            n[j] = temp;
         }
      }
   } 
   for (int i = 0; i< tamaño; i++) {
      cout << n[i] << " ";
   }
    cout << endl;
    cout<<"el numero mayor es:"<<mayor<<endl;
    cout<<"el menor valor es:"<<menor<<endl;
    cout<<"la suma es :"<<suma<<endl;
  
    cout<<"se repite:"<<admi<<"veces";


    return 0;
    }