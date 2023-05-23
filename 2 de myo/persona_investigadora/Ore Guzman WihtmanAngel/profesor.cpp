#include<iostream>
#include<string>

using namespace std;
class Profesor{
private:
string nombre ;
string apellido;
string dni;
string facultad;

public:
Profesor(string _nombre="" , string _apellido="" , string _dni="" , string _facultad=""){
     apellido=_apellido;
     nombre =_nombre;
     dni=_dni;
     facultad=_facultad;
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
    string getDataProfesor(){
        return "nombre:"+ nombre + ", apellido:" + apellido +", Dni:" + dni + ", facultad:" + facultad ;
    }


};