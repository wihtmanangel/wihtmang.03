#include <iostream>
#include <fstream>
#include <string>
#include "empleado.cpp"

using namespace std;
int main()
{   Empleado empleado1("Juan","Guzman","630444","16/03/1987","36","Jefe de Departamento","$5200","10años");
    Empleado empleado2("Jose","Jimenez","456789","16/02/1990","33","Jefe de Secretaria","$4500","15 años");
    Empleado empleado3("Ricardo","Ore","654656","16/04/1989","34","Tecnico","$46900","15 años");
    Empleado empleado4("Josue","Perez","456321","16/04/1987","36","Tecnico supervisor","$4500","15 años ");
    Empleado empleado5("Juanmi","Ortega","456987","16/071999","24","Practicante tecnico","$2500","2 años");
    Empleado empleado6("Carlos","Vilchez","456789","17/03/1990","30","Tecnico en redes","$3800","8años");
    Empleado empleado7("Jean","Quispicho","456231","16/07/1990","30","Supervisor","$4560","6");
    Empleado empleado8("Carlos","Diego","4561238","16/03/1991","31","Tecnico","$4500","5 años");
    Empleado empleado9("Mouriño","Guardiola","4561278","16/05/1990","30","Tecnico","$4500","7 años");
    Empleado empleado10("Josiño","Lampard","45678912","16/08/1999","24","Tecnico en seguridad","$3000","4 años");
// creando Departamentos
    Departamento departamento1("Departamento de Redes", "DR");
    Departamento departamento2("Departamento de Seguridad", "DS");
    Departamento departamento3("Departamento de Software", "DSw");
   
  //asignando Departamentos
   empleado1.setDepartamento(departamento3);
    empleado2.setDepartamento(departamento1);
    empleado3.setDepartamento(departamento2);
    empleado4.setDepartamento(departamento3);
    empleado5.setDepartamento(departamento2);
    empleado6.setDepartamento(departamento1);
    empleado7.setDepartamento(departamento2);
    empleado8.setDepartamento(departamento2);
    empleado9.setDepartamento(departamento1);
    empleado10.setDepartamento(departamento3);
   
   
   
    Empleado numero_Empleado[10] = {empleado1, empleado2, empleado3 , empleado4,empleado5,empleado6,empleado7,empleado8,empleado9,empleado10};
    int maximo =sizeof(numero_Empleado)/sizeof(numero_Empleado[0]);
      ofstream archivo;
      archivo.open("Empleados.txt");


    archivo<<"Departamento de Redes"
            <<"\n";

    for (int i = 0; i < maximo; i++)
    {
        
      if(numero_Empleado[i].getDepartamento().getSiglas()=="DR"){

       archivo <<numero_Empleado[i].imprimirdatoString()<<endl;
       
      }
}
    archivo<<"Departamento de Seguridad"
        <<"\n";
        for(int i=0; i<maximo;i++)
        {
        if(numero_Empleado[i].getDepartamento().getSiglas()=="DS"){
            archivo<<numero_Empleado[i].imprimirdatoString()<<endl;
        }
        }
    archivo<<"Departamento de Software"
    <<"\n";
    for(int i=0 ; i<maximo ;i++){
        if(numero_Empleado[i].getDepartamento().getSiglas()=="DSw"){
         archivo<<numero_Empleado[i].imprimirdatoString()<<endl;
        }
        
    }
  archivo.close();
  return 0;
}