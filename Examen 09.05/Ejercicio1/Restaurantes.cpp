#include <iostream>
#include <string>
#include"Platos_del_dia.cpp"


using namespace std;
class Restaurante:public Platos_del_dia
{
protected:
    string nombre;
    string direccion;
    int menu_del_dia=0;
    int ganancia=0;
    float venta_delivery=0;
    float ventas_en_mesa=0;
    Platos_del_dia platodeldia[6];
    

public:
    Restaurante(string _nombre, string _direccion, int _menu_del_dia, float _venta_delivery, float _venta_en_mesa)
    {
        nombre = _nombre;
        direccion = _direccion;
        menu_del_dia = _menu_del_dia;
        venta_delivery = _venta_delivery;
        ventas_en_mesa = _venta_en_mesa;
    }
    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getDireccion()
    {
        return direccion;
    }
    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }
    int  getMenu_del_dia()
    {
        return menu_del_dia;
    }
    void setMenu_dia(int _menu_del_dia)
    {
        menu_del_dia = _menu_del_dia;
    }
    float getventas_Delivery()
    {
        return venta_delivery;
    }
    void setVentas_Delivery(float _venta_delivery)
    {
        venta_delivery = _venta_delivery;
    }
    float getVentas_en_mesa()
    {
        return ventas_en_mesa;
    }
    void setVentas_en_mesa(float _ventas_en_mesa)
    {
        ventas_en_mesa = _ventas_en_mesa;
    }

    void agregrarPlatosdeldia( Platos_del_dia _platodeldia)
    {
        if(menu_del_dia < 5)
        {
            platodeldia[menu_del_dia]=_platodeldia;
           menu_del_dia++;
        }
        else
        {
            cout<<"No se admite agregar mas platos al menu del dia"<<endl;
        }
    }
    string mostrarInfo(){
        cout<<".-Restaurante"<<nombre<<endl;
        cout<<".-Direccion"<<direccion<<endl;
        cout<<".-Menu del dia"<<endl;

        if(sizeof(platodeldia)/sizeof(platodeldia[0])!=0){
            for(int i=0; i<5;i++){
                cout<<" .- "<<platodeldia[i].datosString()<<endl;

            }
        }
        else{
            cout<<"No se han  registrado platos ....."<<endl;
        }

    }
    string stringInfo()
    {
        string informacion;
        for(int i=0; i<6; i++)
        {
        informacion=informacion +".- " + platodeldia[i].datosString() + "\n";
        }
        return informacion;
    }
    
    void agregarGanancias(float agregos){
        ganancia=ganancia+agregos;

    }
    string stringReportVentas(){
        string info;
        info=info + ".- Ventas Delivery:"+ to_string(venta_delivery)+"\n";
        info=info + ".- Ventas en Mesa:" + to_string(ventas_en_mesa)+"\n";
        info=info + ".- Ganancias :" + to_string(ganancia)+ "\n";
        return info;
    }

};