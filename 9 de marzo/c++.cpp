#include<iostream>
using namespace std;
int main(){  
    
  /*  int a[5];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;*/
  // int a []={1 , 2, 3,};/
  string a[5]={"laptop", "cafetera", "arrocera","refrigeradora", "celular"};
  cout<<a[2]<<endl;
  a[2]="computadora";
  cout<<endl<<a[2];
  
  for(int i=0 ; i<5;i++){
    cout<<"\n"<<"el vector a["<<i<<"]"<<a[i];
  }

      return 0;
}