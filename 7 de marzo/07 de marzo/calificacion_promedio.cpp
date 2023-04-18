#include<iostream>

using namespace std;

int promedio (int nota_1,int nota_2,int nota_3){
    int not_prom=0;

    not_prom=(nota_1+nota_2+nota_3)/3;


    return not_prom;

}

int main (){
    int nota_1,nota_2,nota_3,not_promedio;

    cout<<"Digite la primera nota: ";
    cin>>nota_1;

    cout<<"Digite la segunda nota: ";
    cin>>nota_2;

    cout<<"Digite la tercera nota: ";
    cin>>nota_3;    

    cout<<"El promedio es:"<<promedio(nota_1,nota_2,nota_3);
    return 0;
}

