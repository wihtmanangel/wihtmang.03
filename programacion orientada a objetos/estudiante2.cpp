#include<iostream>
#include<string>
#include<ctime>

#include "estudiante.cpp"

using namespace std ;

int main(){
 Estudiante estudiante1("202222154","FIME","ore.guzman@gmail.com","jose", "63044467", "asd", "asd");
 Estudiante estudiante2("4561237890","CONTABILIDAD","ORIHUELA.LIA@GMAIL.COM","jan","65432198", "asd", "asd");


 //Estudiante estudiante3("741258963","FIIA","DENNIS.COS@GMAIL.COM", "63444656");
 cout<<"Estudiante:\n";
 estudiante1.getdato();
 estudiante2.getdato();
 //estudiante3.imprimir();
 return 0;

}