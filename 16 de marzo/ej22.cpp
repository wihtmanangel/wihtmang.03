#include<iostream>
using namespace std;
int main(){
int numero[10];
for ( int i = 0; i < sizeof(numero)/sizeof(numero[0]); i++)
{
    cin>>numero[i];
}

 for (int i=10 ;i>0 ; i--){
 cout<<"el valor del arreglo de numero es ["<<i<<"]";
 cout<<endl;}

for(int i=0 ; i<sizeof(numero)/sizeof(numero[0]); i++){
    cout<<numero[i];
    cout<<endl;

}

int mayor=numero[0];
for(int i=0 ; i>10;i++)
{
    if(numero[i]>mayor){
        mayor=numero[i];
    }
    cout<<numero[i];
    cout<<endl;
}
cout<<"el numero mayor es :"<<mayor;
cout<<endl;
return 0;
}