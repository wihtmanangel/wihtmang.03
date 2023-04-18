#include<iostream>
using namespace std;
int  main(){
   int *p;
   int *q;
   int a=20;
   p=&a;
   q=p;
   q++;
    cout<<""<<"/n"<<p;
   
    return 0;
}