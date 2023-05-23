// librerias
#include <string>
#include <iostream>
using namespace std;

class Curso
{
private:
    // atributos
    string nombre_curso;
    int creditos;
    string parcial1;
    string parcial2;
    string examen_final;
    string examen_medio_curso;

public:
    Curso(string _nombre_curso, int _creditos, string  _parcial1, string _parcial2, string _examen_final, string _examen_examen_curso)
    {
        nombre_curso = _nombre_curso;
        creditos = _creditos;
        parcial1 = _parcial1;
        parcial2 = _parcial2;
        examen_final = _examen_final;
        examen_medio_curso = _examen_examen_curso;
    }

    string getNombre_curso()
    {
        return nombre_curso;
    }
    int getCreditos()
    {
        return creditos;
    }

    string getParcial1()
    {
        return parcial1;
    }
    string getParcial2()
    {
        return parcial2;
    }
    string getExamen_medio_curso()
    {
        return examen_medio_curso;
    }
    string getExamen_final()
    {
        return examen_final;
    }

    void setNombre_curso(string _nombre_curso)
    {
        nombre_curso = _nombre_curso;
    }

    void setCreditos(int _creditos)
    {
        creditos = _creditos;
    }
    void setParcial1(string _parcial1)
    {
        parcial1 = _parcial1;
    }
    void setParcial2(string _parcial2)
    {
        parcial2 = _parcial2;
    }
    void setExamen_medio_curso(string _examen_medio_curso)
    {
        examen_medio_curso = _examen_medio_curso;
    }
    void setExamen_final(string _examen_final)
    {
        examen_final = _examen_final;
    }
    void imprimir()
    {
        cout << "\n los datos del curso" <<"\n"<< nombre_curso << "\n"
             << creditos << "\n"
             << parcial1 << "\n"
             << parcial2 << "\n"
             << examen_medio_curso << "\n"
             << examen_final;
    }
};

int main()
{
    Curso curs1("matematica", 4, "20%", "20%", "30%", "30%");
    Curso curs2("inlges", 5, "25%", "25%", "25%", "25%");

    curs1.imprimir();
    curs2.imprimir();
    return 0;
}