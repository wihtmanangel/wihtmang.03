//LIBRERIAS
#include<string>
#include<iostream>
using namespace std;

class Estudiante{
    private:
    //atributos
    string codigo;
    string nombre;
    string apellido;
    string dni;
    int edad;
    //datetime fecha_nacimiento;

    //metodos y funciones
    public:
    //constructor
   
    Estudiante(string nom, string ap, string _dni,string _codigo,int _edad){
        nombre = nom;
        apellido = ap;
        dni = _dni;
        codigo=_codigo;
        edad=_edad;
    }

    string getCodigo()
    {
        return codigo;
    }

    string getNombre(){
        return nombre;
    }
    string getApellido(){
        return apellido;
    }
    int getEdad(){
        return edad;
    }
    
    string getDni(){
        return dni;
    }

    void setCodigo(string _codigo){
    codigo = _codigo;
    }
    void setNombre(string _nombre){
    nombre = _nombre;
    }
    void setApellido(string _apellido){
    apellido = _apellido;
    }
    void setDni(string _dni){
    dni = _dni;
    }
    void setEdad(int _edad){
        edad=_edad;
    }

    //datetime fecha_nacimiento;
   //datetime fecha_nacimiento;

    void imprimir(){
        cout<<"\nlos datos del estudiante: "<<nombre<<"\t"<<apellido<<"\t"<<dni<<"\t"<<codigo<<"\t"<<edad;

    }
};

int main(){
    //crear objetos
    //Estudiante est=new Estudiante();
    Estudiante est1("Denis","polinar","123","0020200200",22);
    Estudiante est2("neyer","eugenio","456","0020220215",29);
    Estudiante est3("erick","simon","789", "0020200456",35);

   // cout<<"El nombre del estudiante es: "<<est1.getNombre();
    est1.imprimir();
    est2.imprimir(); 
    est3.imprimir();

    //actualizacion de datos en est1
    est1.setNombre("lister");
    est1.setEdad(50);

    est1.imprimir();

    return 0;
}