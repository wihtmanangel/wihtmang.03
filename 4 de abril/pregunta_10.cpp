#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    time_t t; // variable para guardar el tiempo actual
    time(&t); // obtener el tiempo actual
    srand((unsigned int) t); // usar el tiempo como semilla para la función rand()
    
    int num_aleatorio = rand() % 100 + 1; // generar un número aleatorio entre 1 y 100
    int intentos = 0; // contador de intentos
    
    int num_ingresado;
    do {
        cout << "Ingrese un número entre 1 y 100: ";
        cin >> num_ingresado;
        
        if (num_ingresado < num_aleatorio) {
            cout << "El número a adivinar es mayor." << endl;
        }
        else if (num_ingresado > num_aleatorio) {
            cout << "El número a adivinar es menor." << endl;
        }
        
        intentos++; // aumentar el contador de intentos
    } while (num_ingresado != num_aleatorio);
    
    cout << "¡FELICIDADES! Adivinaste el número en " << intentos << " intentos." << endl;
    
    return 0;
}