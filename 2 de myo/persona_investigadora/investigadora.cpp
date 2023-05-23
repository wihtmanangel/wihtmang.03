#include<iostream>
#include<string>


using namespace std;

class Investigador{
protected:
string codigo ;
string especialidad;
string librospublicados;
 public:
 Investigador(string _codigo="", string _especialidad="", string _librospublicados=""){
    codigo=_codigo;
    especialidad=_especialidad;
    librospublicados=_librospublicados;
 }
 void setInvestigador(string _codigo , string _especialidad , string _librospublicados){
       codigo=_codigo;
    especialidad=_especialidad;
    librospublicados=_librospublicados;
 }
 string getDataInvestigador(){
    return "codigo de investigador:->"  + codigo +  ",especialidad:->"+ especialidad + ",libros publicados:->" + librospublicados;
 }
};