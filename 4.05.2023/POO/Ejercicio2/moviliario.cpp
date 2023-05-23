#include<iostream>
#include<string>
#include"vehiculo.cpp"
using namespace std;
 class Movilidad:public Vehiculo{
 protected :
 string color;
 string tipo ;
 string marca_vehiculo;
 public:
 Movilidad(string _motor_cilindradas ,string _num_ruedas,string _num_puertass,string _num_asientos , string _certificacion,string _color , string _tipo , string _marca_vehiculo):Vehiculo(_motor_cilindradas, _num_ruedas,_num_puertass,_num_asientos,_certificacion){
 color=_color;
 tipo=_tipo;
 marca_vehiculo=_marca_vehiculo;
 }
     // Getters
    string getColor(){
        return color;
    }

    string getMarca_vehiculo(){
        return marca_vehiculo;
    }

    string getTipo(){
        return tipo;
    }

    // Setters
    void setColor(string _color){
        color = _color;
    }

    void setMarca(string _marca_vehiculo){
        marca_vehiculo = _marca_vehiculo;
    }

    void setTipo(string _tipo){
        tipo = _tipo;
    }
     string getDatos(){
        string datos = "Cilindrada motor: " + motor_cilidrandas + "| Nro asientos: " + num_asientos + "| Nro ruedas: " + num_ruedas + "| Nro puertas: " + num_puertass + "| Certificacion: " + certificacion + "| Color: " + color + "| Marca: " + marca_vehiculo;
        return datos;
 }
 };