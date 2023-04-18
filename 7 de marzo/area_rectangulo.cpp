#include<iostream>
using namespace std;
int area (int largo , int ancho){
    int are_rectan=0;
    are_rectan=(largo*ancho);
    return are_rectan;


}
int main(){
    int largo , ancho;
    cout<<"ingrese el ancho del rectangulo:"<<endl;
    cin>>largo;
    cout<<"ingrese el largo del rectangulo:"<<endl;
    cin>>ancho;
    cout<<"el area del rectangulo es:"<<area(largo ,ancho)<<endl;

    return 0;
}