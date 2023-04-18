#include<iostream>
using namespace std;
int main(){
int a[5]={1,3,2,1,2};
int b=sizeof(a)/sizeof(a[0]);
cout<<"los numeros que se repiten son:";
for (int i;i< b - 1; i++){
  for (int j=i++; j<b; j++){
    if(a[i]=a[j]){
        cout<<a[i];
        break;
    }
  }
}
cout<<endl;



    return 0;
}