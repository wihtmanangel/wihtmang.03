#include <iostream>
#include <string>
#include "persona.cpp"
using namespace std;

class Estudiante : Persona
{
private:
    string codigo;
    string facultad;
    string correo;
    // metodos y funciones
public:
    Estudiante(string _codigo, string _facultad, string _correo, string _nombre, string _apellido, string _direccion, string _dni) : Persona(_nombre, _apellido, _direccion, _dni)
    {
        codigo = _codigo;
        facultad = _facultad;
        correo = _correo;
    }

    string getCodigo()
    {
        return codigo;
    }

    string getFacultad()
    {
        return facultad;
    }
    string getCorreo()
    {
        return correo;
    }

    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }
    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }
    void setCorreo(string _correo)
    {
        correo = _correo;
    }

    void getdato()
    {
        cout << "Los datos del estudiante son " << getNombre() << ", " << getApellido() << ", " << getDni();
    }
};
