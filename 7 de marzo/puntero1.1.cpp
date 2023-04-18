#include<iostream>

using namespace std;

int main (){
    int *q,numero;

    cout<<"Digite un numero: ";
    cin>>numero;

    if (numero%2==1)
    {
        q=&numero;
        cout<<"El numero es impar"<<endl;
        cout<<q;
    }
    else{
        q=&numero;
        cout<<"El numero es par"<<endl;
        cout<<q;
    }

    return 0;
}