#include<iostream>
#include "clase.01.cpp"
using namespace std;

class ClaseAmiga{
    private:
    string valor;
    public:
    ClaseAmiga(){

    }
    void imprimir(int numero){

        Clase01 c;
        c.setValor(numero);
        c.imprimir();

    }

};