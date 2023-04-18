#include<iostream>
using namespace std;
int main(){

int electrodomestico1;
int electrodomestico2;
int electrodomestico3;
int electrodomestico4;
int electrodomestico5;

cout<<"lavadora";
cin>>electrodomestico1;
cout<<"refrigeradora";
cin>>electrodomestico2;
cout<<"olla arrocera";
cin>>electrodomestico3;
cout<<"ventiladora";
cin>>electrodomestico4;
cout<<"licuadora";
cin>>electrodomestico5;

string p[5]={"lavadora" , "refrigeradora" , "olla arrocera" ,  "ventiladora" , "licuadora"};
cout<<p[2]<<endl;
p[2]="computadora";
cout<<endl<<p[2];
 for (int i = 0 , i<5 ; i++)
 {
    cout<<"el valor del arreglo es["<<i<<"]";
         
 }
 

int tamaño = sizeof(p) / sizeof(p[0]);
     cout << "\n"
          << "\n"
          << "el valor maximo del indice es: "
          << tamaño<< "\n";

 
 return 0;
 }








 