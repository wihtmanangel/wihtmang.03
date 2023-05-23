#include<iostream>
#include<string>
#include"profesor.cpp"
#include"investigadora.cpp"


using namespace std;

class InvestigadorProfesor:public Investigador , public Profesor{
    private:
    string codigo_p;
    public:
    InvestigadorProfesor( string _nombre="", string _apellido="",string _dni="" , string _facultad="", string _codigo="", string _especialidad="", string _librospublicados=""):Profesor(_apellido, _nombre, _dni , _facultad), Investigador(_codigo , _especialidad , _librospublicados){
    
    }
   
};
