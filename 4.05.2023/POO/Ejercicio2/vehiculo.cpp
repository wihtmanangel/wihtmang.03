#include<iostream>
#include<string>
using namespace std;
class Vehiculo{
    protected:
    string motor_cilidrandas;
    string num_ruedas;
    string num_puertass;
    string num_asientos;
    string certificacion;
    public:
    Vehiculo(string _motor_cilindradas="",string _num_asientos="",string _num_ruedas="",string _num_puertass="", string _certificacion=""){
      motor_cilidrandas=_motor_cilindradas;
      num_ruedas=_num_ruedas;
      num_puertass=_num_puertass;
      num_asientos=_num_asientos;
      certificacion=_certificacion;
    }
    string getMotor_cilindradas(){
        return motor_cilidrandas;
    }
    void setMotor_cilindradas(string _motor_cilindradas){
        motor_cilidrandas=_motor_cilindradas;
    }
    string getNum_asientos(){
        return num_asientos;
    }
    void setNum_asientos(string _num_asientos){
        num_asientos=_num_asientos;
    }
    string getNum_ruedas(){
        return num_ruedas;

    }
    void setNum_ruedas(string _num_ruedas){
        num_ruedas=_num_ruedas;
    }
    string getNum_puertas(){
        return num_puertass;
    }
    void setNum_puertas(string _num_puertass){
        num_puertass=_num_puertass;
    }
    string getCertificacion(){
        return certificacion;

    }
    void setCertificacion(string _certificacion){
        certificacion=_certificacion;
    }
    





};
