#include<iostream>
#include<fstream>
#include"biblioteca.cpp"

int main(){
    //Biblioteca
    Biblioteca biblioteca("B4567","Biblioteca Central de LP","Av. Iquitos642","01-456-4568");
    
    //Libros
    Libro libro1("45687","Odisea","Guerra","Homero");
    Libro libro2("451278","La Iliada","Paz y Justicia","Homero");
    Libro libro3("45678","Hamlet","Desfamiliarizacion","Kafka");
    Libro libro4("456398","La Divina Comedia","Ilusion","Cervantes");
    Libro libro5("458712","La bella y la Bestia","Desamor","Anonimo");


    //Registrando libros 
    biblioteca.Libros_Registrados(libro1);
    biblioteca.Libros_Registrados(libro2);
    biblioteca.Libros_Registrados(libro3);
    biblioteca.Libros_Registrados(libro4);
    biblioteca.Libros_Registrados(libro5);
      
      
    // Crear usuarios
    Usuario usuario1("U001");
    Usuario usuario2("U002");
    Usuario usuario3("U003");
    Usuario usuario4("U004");
    Usuario usuario5("U005");
      // Crear bibliotecarios
    Bibliotecario bibliotecario1("C456");

      // Prestar libros
    biblioteca.prestamodeLibros(bibliotecario1,usuario1,libro1);
    biblioteca.prestamodeLibros(bibliotecario1,usuario2, libro2);
    biblioteca.prestamodeLibros(bibliotecario1,usuario4, libro5);
    biblioteca.prestamodeLibros(bibliotecario1, usuario3,libro3);

    // Imprimir prestamos
    ofstream archivo("Biblioteca Central.txt");
    archivo << biblioteca.imprimirPrestamo();
    archivo.close();
    return 0;
}
