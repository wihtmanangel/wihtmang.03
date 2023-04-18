#include<iostream>
using namespace std;
int main(){
int numero[10]={1 ,2 ,3 ,4 , 5, 6 , 7, 8 , 9,10};
 for (int i=0 ;i<10 ; i++)
 cout<<"el valor del arreglo de numero es ["<<i<<"]"<<endl;
for(int i=0 ; i<sizeof(numero)/sizeof(numero[0]); i++){
    cout<<numero[i]<<endl;

}
int menor=numero[0];
for(int i=1 ; i<sizeof(numero)/sizeof(numero[0]);i++)
{
    if(numero[i]<menor){
        menor=numero[i];
    }
}
cout<<"el numero menor es :"<<menor<<endl;
return 0;
}