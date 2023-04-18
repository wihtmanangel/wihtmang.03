#include <iostream>
using namespace std;
/*funcion para calcular el area de triangulo denominandolo como float*/
float area(float base, float altura)
{
    float are_triangulo = 0;/*el area del trianculo lo  igualaremos a 0*/

    cout << "ingrese el altura del triangulo:" << endl;
    cin >> altura;
    cout << "ingrese la base del triangulo:" << endl;
    cin >> base;
    {
    are_triangulo = (base * altura) / 2;/* calculamos el area del triangulo con su formula */
    }

    cout << "el AREA DEL TRIANGULO es :" <<endl <<are_triangulo<<endl ;/*el programa bota el resultado*/
    return are_triangulo;
}
/* ahora una funcion para hallar el perimetro del triangulo*/
int perimetro(int lado[3])
{
    int suma = 0;/* su sumatoria lo igualamos a cero ya que en el programa toda operacion inicia de derecha a izquierda*/
    int perimetro;
    for (int i = 0; i < 3; i++)/* for para la veces que le pediremos el valor de los lados del triangulo*/
    {
        cout << "ingrese el valor del lado:" << endl;
        cin >> lado[i];
        suma = suma + lado[i];
    }
    perimetro = suma;
    cout << "el PERIMETRO es :" <<endl<< perimetro<<endl;
    return perimetro;
}
int main()
{
    int lado[3];
    int base, altura;
    area(base, altura);
    perimetro(lado);
    
    return 0;
}
