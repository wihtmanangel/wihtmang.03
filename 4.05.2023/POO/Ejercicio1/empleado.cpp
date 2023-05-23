#include <iostream>
#include <string>
#include "persona.cpp"
#include "departamento.cpp"

using namespace std;
class Empleado : Persona
{
private:
     string puesto;
     string sueldo;
     string antiguedad;
     Departamento departamento;

public:
     Empleado(string _nombre, string _apellido, string _dni, string _fecha_nacimiento, string _edad, string _puesto, string _sueldo, string _antiguedad) : Persona(_nombre, _apellido, _dni, _fecha_nacimiento,_edad)
     {
          puesto = _puesto;
          sueldo = _sueldo;
          antiguedad = _antiguedad;
     }
     string getPuesto()
     {
          return puesto;
     }

     void setPuesto(string _puesto)
     {
          puesto = _puesto;
     }

     string getSueldo()
     {
          return sueldo;
     }

     void setSueldo(string _sueldo)
     {
          sueldo = _sueldo;
     }
     string getAntiguedad()
     {
          return antiguedad;
     }
     void setAntiguedad(string _antiguedad)
     {
          antiguedad = _antiguedad;
     }

     Departamento getDepartamento()
     {
          return departamento;
     }
     void setDepartamento(Departamento _departamento)
     {
          departamento = _departamento;
     }

       string imprimirdatoString()
    {
        string datos = puesto + " | " + sueldo + " " + antiguedad + " " + getNombre() + " " + getApellido() + " " + getDni() + " " + getFecha_nacimiento() + " " + getEdad();
        return datos;
    }
};