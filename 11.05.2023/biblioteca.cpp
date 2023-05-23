#include <string>
#include <iostream>
#include "usuario.cpp"

using namespace std;
class Biblioteca
{
private:
    string codigo;
    string nombre;
    string direccion;
    string telefono;
    string prestamo;
    Usuario usuario;
    Libro libros[5];
    Bibliotecario bibliotecarios;
    int numLibro = 0;

public:
    Biblioteca(string _cod = "", string _nom = "", string _direc = "", string _telefono = "")
    {
        codigo = _cod;
        nombre = _nom;
        direccion = _direc;
        telefono = _telefono;
        numLibro = 0;
        prestamo = "";
    }
    void setNumLibro(int _numLibro)
    {
        numLibro = _numLibro;
    }

    void prestamodeLibros(Bibliotecario blibliotecario, Usuario usuario, Libro libro)
    {
        if (numLibro >0)
        {
            libros[numLibro] = libro;
            numLibro--;
            prestamo = prestamo + "Bibliotecario : " + bibliotecarios.getCodigo() + "\n";
            prestamo = prestamo + usuario.Libros_Registrados(libro);
        }
        else
        {
            cout << "No hay libros suficientes para prestar \n";
        }
    }

    void Libros_Registrados(Libro libro)
    {
        if (numLibro < 5)
        {
            libros[numLibro] = libro;
            numLibro++;
        }
        else
        {
            cout << "No se pueden registrar mas libros" << endl;
        }
    }

   
    
    string imprimirPrestamo()
    {
        return prestamo;
    }
};
