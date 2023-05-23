#include<iostream>
#include"persona.cpp"

using namespace std;
class Bibliotecario : public Persona{
 private:
 string codigo_de_bibliotecario;

 public:
 //constructor
 Bibliotecario(string _nombre="", string _apellidos="", string _dni="", string _correo="", string _telefono="",string _direccion="",string _codigo_de_bibliotecario=""){
    codigo_de_bibliotecario=_codigo_de_bibliotecario;
 }
 string getCodigo(){
    return codigo_de_bibliotecario;
 }
string getDatos(){
    return codigo_de_bibliotecario + " " + getNombres() +getApellidos()+ "  " +getDni()+ "  " +getCorreo()+"  "+ getTelefono()+ " "+ getDireccion();
}



};