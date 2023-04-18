#include<iostream>
using namespace std;
int main(){
int numero[10]={1,2 , 3 ,4 , 5, 6 , 7, 8 , 9,10};


 for (int i=10 ;i>0 ; i--){
 cout<<"el valor del arreglo de numero es ["<<i<<"]"<<endl;}

for(int i=0 ; i<sizeof(numero)/sizeof(numero[0]); i++){
   

}

int mayor=numero[9];
for(int i=9 ; i>=0;i--)
{
    if(numero[i]>mayor){
        mayor=numero[i];
    }
    cout<<numero[i]<<endl;
}
cout<<"el numero mayor es :"<<mayor<<endl;
return 0;
}