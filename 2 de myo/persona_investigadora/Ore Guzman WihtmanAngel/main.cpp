#include<iostream>
#include<string>
#include"investigador-profesor.cpp"


using namespace std;

int main(){
    InvestigadorProfesor IP1("Ore","jose","630444467","Fime","6547892","Diseño tecnico","Introducion a la Mecatronica");
    InvestigadorProfesor IP2("Sanchez","Jose","45632145", "FIME" ,"456987", "Mecanica de autos","Introduccion a la Mecanica");
    InvestigadorProfesor IP3("Ore","Aroon","63044467","Fcea","654789123","Contabilidad Analitica","Contabilidad en lugares ublicos");
    InvestigadorProfesor IP4("Orihuela","Anghel","63258941","FIIS","4569872", "Ingenieria de Software", "Programacion Basica");
    InvestigadorProfesor IP5("Soto","Saulo","65478213","FIIS","64578945","Administracion de datos","Networking");
    

     InvestigadorProfesor
     numero_InvestigadorProfesor[5]={IP1,IP2,IP3,IP4,IP5};

     //
     for(int i=0; i<5 ;i++){
         cout<<numero_InvestigadorProfesor[i].getDataProfesor()<<endl;
        cout<<numero_InvestigadorProfesor[i].getDataInvestigador()<<endl;
        cout<<"-----********-------"<<endl;
     }

    return 0;
}