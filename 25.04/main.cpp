#include <string>
#include <fstream> // manejo de archivos txt file stream
//llamado a la clase
#include "estudiante.cpp"

using namespace std;

int main(){
    //crear facultades
    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de de Zootecnia", "FZ");

    // Estudiantes de FIIS
    Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
    est1.setFacultad(facu1);
    Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    est2.setFacultad(facu1);
    Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    est3.setFacultad(facu1);
    Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");
    est4.setFacultad(facu1);
    // Estudiantes de ZOOTECNIA
    Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    Estudiante est7("20220050", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
    Estudiante est8("2022002", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");
    Estudiante est9("20220754","salinas.ore@unas.edu.pe","Esteban", "Lopez","63044467");
    Estudiante est10("20220457","frank.danilo@unas.edu.pe", "estrada","jose", "65498732");

    // crear cursos
    Curso curs_1("0001", "Programacion Basica", 4);
    Curso curs_2("0002", "Diseño de BD", 3);
    Curso curs_3("0003", "Sotfware I", 3);
    Curso curs_4("0004", "Sotfware II", 4);
    Curso curs_5("0005", "Gestion de procesos", 4);

    Curso curs_6("0001", "Zoologia principal", 4);
    Curso curs_7("0002", "Taxonomia", 3);
    Curso curs_8("0003", "ingertacion de animales", 3);
    Curso curs_9("0004", "introduccion a la zootecnia", 4);
    Curso curs_10("0005", "Estadistica", 4);
    
    // agregando cursos para est1
    est1.agregarCurso(curs_1);
    est2.agregarCurso(curs_2);
    est3.agregarCurso(curs_3);
    est4.agregarCurso(curs_4);
    est5.agregarCurso(curs_5);
    est6.agregarCurso(curs_1);
    est7.agregarCurso(curs_1);
    est8.agregarCurso(curs_1);
    
    //mostrar los cursos registrados al est1
   // est1.mostrarCursos();

    //est1.ingresarNotas();

    //est1.mostrarCursos();


   
	

   return 0;
}