#include <iostream>
#include <fstream>
#include "Restaurantes.cpp"


using namespace std;
int main()
{
    //Restaurante 
    Restaurante RicaSazon("Rica Sazon","Av. tito Jaime 642",6 , 0 ,0);
  
  //Creacion de platos
  Platos_del_dia vacio("",0,0);//Para que el arreglo empieze de 0
  Platos_del_dia menu1("Juanes",25,100);
  Platos_del_dia menu2("Rocoto relleno",40,55);
  Platos_del_dia menu3("Arroz con pollo",45,60);
  Platos_del_dia menu4("Chupe de camarones",45,30);
  Platos_del_dia menu5("Trio marino",60,100);
  Platos_del_dia menu6("Parihuela",45,100);

  //Arreglo de menu
  Platos_del_dia menu[7]={vacio,menu1, menu2 , menu3 , menu4 , menu5 , menu6};
  
  //Asignando menu
  RicaSazon.agregrarPlatosdeldia(menu1);
  RicaSazon.agregrarPlatosdeldia(menu2);
  RicaSazon.agregrarPlatosdeldia(menu3);
  RicaSazon.agregrarPlatosdeldia(menu4);
  RicaSazon.agregrarPlatosdeldia(menu5);
  RicaSazon.agregrarPlatosdeldia(menu6);


  //archivo txt
 ofstream reporte("reporte del restaurante.txt");
 reporte<<"Rica Sazon \n Reporte del dia: \n";
 reporte<<RicaSazon.stringInfo()+ "\n";

//creando menu
int opcion; //opcion menu

//variable para el menu  // Variables para el menu
    string nombre_cliente;
    int nro_plato;
    int cantidad;

    // Menu
    do
    {
        // Imprimiendo informacion
        RicaSazon.mostrarInfo();

        // Imprimiendo menu
        cout << "Registrar venta por: " << endl;
        cout << "1. Delivery" << endl;
        cout << "2. Mesa" << endl;
        cout << "3. Imprimir reporte y salir" << endl;

        // Leyendo opcion
        cout << "Ingrese opcion: ";
        cin >> opcion;

        // Validando opcion
        switch (opcion)
        {

        // Caso delivery
        case 1:
            cout << "Ingrese nombre de cliente: ";
            cin >> nombre_cliente;
            cout << "Ingrese nro de plato: ";
            cin >> nro_plato;
            // Si el numero ingresado no existe
            if (nro_plato > 5)
            {
                cout << "Plato no existente";
                break;
            }
            cout << "Ingrese cantidad de platos a ordenar: ";
            cin >> cantidad;

            try // Registrar
            {
                platos[nro_plato].comprarPlatos(cantidad); // Descontar de la cantidad de platos
                RicaSazon.agregarGanancias(platos[nro_plato].getPrecioPlato() * cantidad); // Registrar ganacia 
                RicaSazon.agregarVentas_Delivery(cantidad);
                reporte << "[Delivery] Compra hecha por " + nombre_cliente + "\n"; // Registrando en txt
                reporte << "Pago: " + to_string(platos[nro_plato].getPrecioPlato() * cantidad) + "\n";
                reporte <<  platos[nro_plato].getNombrePlato() + " | Cantidad: " + to_string(cantidad) + "\n\n"; // Registrando en txt
                cout << "Todo completado! Registrando orden..." << endl;
                break; // Terminar loop
            }
            catch(const std::exception& e) // Manejar error
            {
                std::cerr << e.what() << '\n'; // Imprimir error
                break;
            }
        // Caso Mesa
        case 2:
            cout << "Ingrese nombre de cliente: ";
            cin >> nombre_cliente;
            cout << "Ingrese nro de plato: ";
            cin >> nro_plato;
            // Si el numero ingresado no existe
            if (nro_plato > 5)
            {
                cout << "Plato no existente";
                break;
            }
            cout << "Ingrese cantidad de platos a ordenar: ";
            cin >> cantidad;

            try // Registrar
            {
                platos[nro_plato].comprarPlatos(cantidad); // Descontar de la cantidad de platos
                RicaSazon.agregarGanancias(platos[nro_plato].getPrecioPlato() * cantidad); // Registrar ganacia 
                tiaveneno.agregarVentaDeMesa(cantidad);
                reporte << "[Mesa] Compra hecha por " + nombre_cliente + "\n"; // Registrando en txt
                reporte << "Pago: " + to_string(platos[nro_plato].getPrecioPlato() * cantidad) + "\n";
                reporte <<  platos[nro_plato].getNombrePlato() + " | Cantidad: " + to_string(cantidad) + "\n\n"; // Registrando en txt
                cout << "Todo completado! Registrando orden..." << endl;
                break; // Terminar loop
            }
            catch(const std::exception& e) // Manejar error
            {
                std::cerr << e.what() << '\n'; // Imprimir error
                break;
            }
        case 3:
            cout << "Imprimiendo reporte!";
            break;
        default:
            cout << "Opcion incorrecta";
            break;
        }

    } while (opcion != 3); // Terminar loop al 3
    reporte << "\n" + RicaSazon.stringInfo();
    reporte.close();
    return 0;




}
