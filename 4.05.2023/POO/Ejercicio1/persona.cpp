#include<iostream>
#include<string>

using namespace std;

class Persona{
 protected:
 string nombre ;
 string apellido;
 string dni;
 string fecha_nacimiento,  edad;
 public:
 Persona(string _nombre="" , string _apellido="" , string _dni="" , string _fecha_nacimiento="", string _edad=0){
    nombre=_nombre;
    apellido=_apellido;
    dni=_dni;
    fecha_nacimiento=_fecha_nacimiento;
    edad=_edad;
 }
 string getNombre(){
    return nombre;
 }
 void setNombre(string _nombre){
    nombre=_nombre;

 }
string getApellido(){
    return apellido;

}
void setApellido(string _apellido){
    apellido=_apellido;
}
string getDni(){
    return dni;

}
void setDni(string _dni){
    dni=_dni;
}
string getFecha_nacimiento(){
    return fecha_nacimiento;
}
void setFecha_nacimiento(string _fecha_nacimiento){
    fecha_nacimiento=_fecha_nacimiento;
}
string getEdad(){
    return edad;
}
void setEdad(string  _edad){
    edad=_edad;
}


};