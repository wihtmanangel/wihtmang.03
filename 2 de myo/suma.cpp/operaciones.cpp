#include<iostream>
#include<string>
#include"suma.cpp"

using namespace std;
class operaciones {
private:
string mensaje;
public:
operaciones(string _mensaje ){
mensaje =_mensaje;

}
void imprimir (int a , int b){
    Suma s(a , b);
    cout<<mensaje << s.imprimir(a,b);
}
};