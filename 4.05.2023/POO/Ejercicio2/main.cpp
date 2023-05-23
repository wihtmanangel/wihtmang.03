#include<iostream>
 #include<fstream>
 #include"moviliario.cpp"

 using namespace std;
 int main(){
    Movilidad auto1("2","4","4","5","2 estrellas","Rojo","Automovil","Hilux");
    Movilidad auto2("1.8","4","2","5","3 estrellas ","Morado","Automovil","Toyota");
    Movilidad auto3("1.78","4","4","6","4 estrellas ","Plateado", "Automovil","Hyundai");
    Movilidad auto4("3","4","4","5","4 estrellas ","Rojo","Automovil","Hylux");
    Movilidad auto5("2.2","4","4","5","5 estrellas","Amarillo","Automovil","Toyota");
    Movilidad auto6("1.5","4","4","6","4.5 estrellas","Vino","Automovil","Ford");
    Movilidad auto7("2.5","4","4","5","5 estrellas","Azul marino","Automovil","BMW");
    Movilidad auto8("1.45","4","4","5","3 estrellas","Rojo encendido","Autmovil","Mercedes Benz");
    Movilidad auto9("3","4","4","6","4 estrellas","Rojo","Automovil","Lexus");

    Movilidad moto1("2.2","2","0","2","3 estrellas","Rojo encendido","Motocicleta","Pulsar");
    Movilidad moto2("1.5","2","0","2","5 estrellas","Plateado con negro","Motocicleta","Sumo");
    Movilidad moto3("3","2","0","2","4 estrellas ","Azul marino","Motocicleta","Bmw");
    Movilidad moto4("1.75","2","0","2","3 estrellas","Negro con azul ","Motocicleta","Polaris");
    Movilidad moto5("3","2","0","2","5 estrellas ","Vino","Motocicleta","Lifan");
     
 Movilidad movilidad_array[14]={auto1,auto2,auto3,auto4,auto5,auto6,auto7,auto8,auto9,moto1,moto2,moto3,moto4,moto5};
 
    int maximo = sizeof(movilidad_array) / sizeof(movilidad_array[0]);

    // Creando txt
    ofstream archivo;
    archivo.open("motos y autos.txt");

    // Escribiendo en txt
    archivo << "Motocar Liverpool S.A." << "\n";
    archivo << ".- Automoviles :" << "\n";
    for (int i = 0; i < maximo; i++)
    {
        if (movilidad_array[i].getTipo() == "Automovil"){
        archivo << movilidad_array[i].getDatos() << "\n";}
    }

    archivo << ".- Motocicletas :" << "\n";
    for (int i = 0; i < maximo; i++)
    {
        if (movilidad_array[i].getTipo() == "Motocicleta"){
        archivo << movilidad_array[i].getDatos() << "\n";}
    }

    archivo.close();

    return 0;
}

 