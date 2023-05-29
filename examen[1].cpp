#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;


class Repuesto {
public:
    string nombre;
    int cantidad;

    Repuesto() = default;

    Repuesto(string nombre, int cantidad) : nombre(nombre), cantidad(cantidad) {}
};

class ServicioTaller {
public:
    string nombre;
    int duracion;  // En minutos

    ServicioTaller() = default;

    ServicioTaller(string nombre, int duracion) : nombre(nombre), duracion(duracion) {}
};

class Cliente {
public:
    string nombre;
    unordered_map<string, int> consumos;  // Fecha -> Consumo

    Cliente() = default;

    Cliente(string nombre) : nombre(nombre) {}

    void agregarConsumo(string fecha, int cantidad) {
        consumos[fecha] += cantidad;
    }
};

class Empleado {
public:
    string nombre;

    Empleado(string nombre) : nombre(nombre) {}
};

class TiendaMotos {
private:
    unordered_map<string, Repuesto> inventarioRepuestos;
    unordered_map<string, ServicioTaller> serviciosTaller;
    unordered_map<string, Cliente> clientes;
    vector<Empleado> empleados;

public:
    void mostrarMenu() {
        int opcion;
        do {
            cout << "********** MENÚ **********" << endl;
            cout << "1. Agregar Repuesto" << endl;
            cout << "2. Agregar Servicio de Taller" << endl;
            cout << "3. Agregar Cliente" << endl;
            cout << "4. Agregar Consumo" << endl;
            cout << "5. Agregar Empleado" << endl;
            cout << "6. Realizar Servicio de Taller" << endl;
            cout << "7. Generar Reporte de Repuestos por Fecha de Registro" << endl;
            cout << "8. Generar Reporte de Servicios Realizados por el Taller" << endl;
            cout << "9. Generar Reporte de Clientes Comunes y su Consumo por Fecha" << endl;
            cout << "0. Salir" << endl;
            cout << "Ingrese una opción: ";
            cin >> opcion;
            cout << endl;

            switch (opcion) {
                case 1:
                    agregarRepuesto();
                    break;
                case 2:
                    agregarServicioTaller();
                    break;
                case 3:
                    agregarCliente();
                    break;
                case 4:
                    agregarConsumo();
                    break;
                case 5:
                    agregarEmpleado();
                    break;
                case 6:
                    realizarServicioTaller();
                    break;
                case 7:
                    generarReporteRepuestos();
                    break;
                case 8:
                    generarReporteServicios();
                    break;
                case 9:
                    generarReporteClientesComunes();
                    break;
                case 0:
                    cout << "¡Hasta luego!" << endl;
                    break;
                default:
                    cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                    break;
            }

            cout << endl;
        } while (opcion != 0);
    }

    void agregarRepuesto() {
        string nombre;
        int cantidad;

        cout << "Ingrese el nombre del repuesto: ";
        cin.ignore();
        getline(cin, nombre);

        cout << "Ingrese la cantidad disponible: ";
        cin >> cantidad;

        inventarioRepuestos[nombre] = Repuesto(nombre, cantidad);

        cout << "El repuesto se ha agregado exitosamente." << endl;
    }

    void agregarServicioTaller() {
        string nombre;
        int duracion;

        cout << "Ingrese el nombre del servicio de taller: ";
        cin.ignore();
        getline(cin, nombre);

        cout << "Ingrese la duración del servicio (en minutos): ";
        cin >> duracion;

        serviciosTaller[nombre] = ServicioTaller(nombre, duracion);

        cout << "El servicio de taller se ha agregado exitosamente." << endl;
    }

    void agregarCliente() {
        string nombre;

        cout << "Ingrese el nombre del cliente: ";
        cin.ignore();
        getline(cin, nombre);

        clientes[nombre] = Cliente(nombre);

        cout << "El cliente se ha agregado exitosamente." << endl;
    }

    void agregarConsumo() {
        string nombreCliente, fecha;
        int cantidad;

        cout << "Ingrese el nombre del cliente: ";
        cin.ignore();
        getline(cin, nombreCliente);

        if (clientes.find(nombreCliente) == clientes.end()) {
            cout << "El cliente no existe. Por favor, agregue el cliente antes de registrar el consumo." << endl;
            return;
        }

        cout << "Ingrese la fecha del consumo (YYYY-MM-DD): ";
        cin >> fecha;

        cout << "Ingrese la cantidad consumida: ";
        cin >> cantidad;

        clientes[nombreCliente].agregarConsumo(fecha, cantidad);

        cout << "El consumo se ha registrado exitosamente." << endl;
    }

    void agregarEmpleado() {
        string nombre;

        cout << "Ingrese el nombre del empleado: ";
        cin.ignore();
        getline(cin, nombre);

        empleados.push_back(Empleado(nombre));

        cout << "El empleado se ha agregado exitosamente." << endl;
    }

    void realizarServicioTaller() {
        string nombreEmpleado, nombreServicio;
        int cantidadRepuestos;

        cout << "Ingrese el nombre del empleado que realizará el servicio: ";
        cin.ignore();
        getline(cin, nombreEmpleado);

        if (findEmpleado(nombreEmpleado) == nullptr) {
            cout << "El empleado no existe. Por favor, agregue al empleado antes de registrar el servicio." << endl;
            return;
        }

        cout << "Ingrese el nombre del servicio de taller a realizar: ";
        getline(cin, nombreServicio);

        if (serviciosTaller.find(nombreServicio) == serviciosTaller.end()) {
            cout << "El servicio de taller no existe. Por favor, agregue el servicio antes de registrarlo." << endl;
            return;
        }

        cout << "Ingrese la cantidad de repuestos vendidos en el servicio: ";
        cin >> cantidadRepuestos;

        // Registramos el servicio realizado
        // ...

        cout << "El servicio se ha realizado exitosamente." << endl;
    }

    void generarReporteRepuestos() {
        cout << "Reporte de repuestos por fecha de registro, cantidad y categoría:" << endl;
        // Generar el reporte de repuestos
        // ...
    }

    void generarReporteServicios() {
        cout << "Reporte de servicios realizados por el taller:" << endl;
        // Generar el reporte de servicios
        // ...
    }

    void generarReporteClientesComunes() {
        cout << "Reporte de clientes más comunes y su consumo por fecha:" << endl;
        // Generar el reporte de clientes
        // ...
    }

private:
    Empleado* findEmpleado(const string& nombreEmpleado) {
        for (auto& empleado : empleados) {
            if (empleado.nombre == nombreEmpleado) {
                return &empleado;
            }
        }
        return nullptr;
    }
};

int main() {
    TiendaMotos tienda;
    tienda.mostrarMenu();
    return 0;
}
