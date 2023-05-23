#include <string>
#include "libro.cpp"
#include "bibliotecario.cpp"
using namespace std;
class Usuario : public Persona
{
private:
    string u_codigo;
    Libro libro;

public:
    Usuario(string _nombre = "", string _apellido = " ", string _dni = "", string _correo = "", string _telefono = " ", string _direccion = " ", string _u_codigo = " ")
    {
        u_codigo = _u_codigo;
    }
     string  Libros_Registrados(Libro libro)
    {
        string registro = u_codigo + " " + "| Libro resgistrado  \n";
        registro = registro + libro.getData() + "\n";
        return registro;
    }
    string getDatos()
    {
        return u_codigo + "  " + getNombres() + "  " + getApellidos() + "  " + getDni() + "  " + getCorreo() + "  " + getTelefono() + "  " + getDireccion();
    }
};