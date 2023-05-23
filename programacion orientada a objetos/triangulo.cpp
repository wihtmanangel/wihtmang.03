#include <iostream>
#include <math.h>

using namespace std;

// crear clase
class Triangulo
{
    // atributos
private:
    float base;
    float altura;
    float hipotenusa;
    float area;
    float perimetro;
 public:
    // constructores y metodos
    Triangulo(float _altura, float _base)
    {
        base = _base;
        altura = _altura;
    }

    // metodos
    // getter and setter
    int getBase()
    {
        return base;
    }
    void setBase(float _base)
    {
        base = _base;
    }
    int getAltura()
    {
        return altura;
    }
    void setAltura(float _altura)
    {
        altura = _altura;
    }
    int getHipotenusa()
    {
        return hipotenusa;
    }
    void setHipotenusa(float _hipotenusa)
    {
        hipotenusa = _hipotenusa;
    }
    int getArea()
    {
        return area;
    }
    void setArea(float _area)
    {
        area = _area;
    }
    int getPerimetro()
    {
        return perimetro;
    }
    void setPerimetro(float _perimetro)
    {
        perimetro = _perimetro;
    }
    void calcular_area()
    {
        area = (base * altura) / 2;
    }
    void calcular_perimetro()
    {
        hipotenusa = sqrt(pow(base, 2) + pow(altura, 2));
        perimetro = base + altura + hipotenusa;
    }
    void calcular_hipotenusa()
    {
        hipotenusa = sqrt(pow(base, 2) + pow(altura, 2));
    }
    void mostrar_datos()
    {
        cout << "la base:" << base << endl;
        cout << "la altura:" << altura << endl;
        cout << "la hipotenusa:" << hipotenusa << endl;
        cout << "el perimetro:" << perimetro << endl;
        cout << "el area es:" << area << endl;
    }
};
int main()
{
    float raiz = sqrt(3);
    cout<<raiz<<endl;
    Triangulo triang1(24, 7);
    triang1.calcular_hipotenusa();
    triang1.calcular_perimetro();
    triang1.calcular_area();
    triang1.mostrar_datos();

    cout<<endl;
    Triangulo triang2(raiz,1);
    triang2.calcular_hipotenusa();
    triang2.calcular_perimetro();
    triang2.calcular_area();
    triang2.mostrar_datos();
    cout<<endl;
    //actualizando datos 
    triang1.setAltura(16);
    triang1.calcular_hipotenusa();
    triang1.calcular_perimetro();
    triang1.calcular_area();
    triang1.mostrar_datos();
    cout<<endl;
    triang2.setAltura(-24);
    triang2.calcular_hipotenusa();
    triang2.calcular_perimetro();
    triang2.calcular_area();
    triang2.mostrar_datos();

    float suma = triang1.getArea()+triang2.getArea();
    cout<<suma;
   
}