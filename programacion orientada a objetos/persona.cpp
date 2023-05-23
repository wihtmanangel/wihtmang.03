#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
  string nombre;
  string apellido;
  string direccion;
  string dni;

  // metodos y funciones
public:
  Persona(string _nombre, string _apellido, string _direccion, string _dni)
  {
    nombre = _nombre;
    apellido = _apellido;
    direccion = _direccion;

    dni = _dni;
  }
  string getNombre()
  {
    return nombre;
  }
  string getApellido()
  {
    return apellido;
  }
  string getDireccion()
  {
    return direccion;
  }

  string getDni()
  {
    return dni;
  }
  void setNombre(string _nombre)
  {
    nombre = _nombre;
  }
  void setApellido(string _apellido)
  {
    apellido = _apellido;
  }
  void setDireccion(string _direccion)
  {
    direccion = _direccion;
  }

  void setDni(string _dni)
  {
    dni = _dni;
  }
};
