#include<iostream>
#include<string>

using namespace std ;
class Platos_del_dia{
protected:
string nombre_del_plato;
float costo_plato;
int  cantidad_platos;
public :
Platos_del_dia(string _nombre_del_plato="" ,float _costo_plato=0, int _cantidad_platos=0){
   nombre_del_plato=_nombre_del_plato;
   costo_plato=_costo_plato;
   cantidad_platos=_cantidad_platos;
}
string getNombre_del_plato(){
    return nombre_del_plato;

}
void setNombre_del_plato(string _nombre_del_plato){
    nombre_del_plato=_nombre_del_plato;
}
float getCosto_plato(){
    return costo_plato;
}
void setCosto_plato(float _costo_plato){
    costo_plato=_costo_plato;
}
int   getCantidad_platos(){
    return cantidad_platos;

}
void setCantidad_platos(int  _cantidad_platos){
    cantidad_platos=_cantidad_platos;
}
void CompradePlatos(int _cantidad_platos){
      if (cantidad_platos >= _cantidad_platos)
        {
            cantidad_platos -= _cantidad_platos;
        }
        else
        {
            cout << "Insuficiencia de abastecimiento de  platos" << endl;
        }
}
   string datosString()
    {
        string descripcion = nombre_del_plato + " , Precio: " + to_string(costo_plato) + " , Cantidad: " + to_string(cantidad_platos);
        return descripcion;
    }

};