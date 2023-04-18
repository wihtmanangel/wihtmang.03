#include<iostream>
#include<conio.h>
using namespace std;

int main (){
    int numero1[]={1,2,3,4,5};
    int numero2[5];

    for (int i = 0; i < 5; i++)
    {
        numero2[i]=numero1[i]*2;
        cout<<numero2[i]<<endl;
    }
    
    getch();
    return 0;


}