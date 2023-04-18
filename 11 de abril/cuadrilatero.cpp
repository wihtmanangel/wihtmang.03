#include<iostream>

using namespace std;

class Cuadrilatero{
    private:
    float lado_1;
    float lado_2;
   
    //metodos y constructor
    public:
   Cuadrilatero(float _lado1, float _lado2 ){
    lado_1=_lado1;
    lado_2=_lado2;
   
}
//seter and getter
  float getLado_1(){
    return lado_1;
  }
  //considerando que las alturas son iguales de un rectangulo
  // es decir lado 1=lado 3
  void setLado_1(float _lado1){
    lado_1=_lado1;

  }

  float getLado_2(){
    return lado_2;
  }
  //igualmente consideramos que lado2=lado4
  void setLado_2(float _lado2){
    lado_2=_lado2;

  }
  float calcular_area(){
    float area=lado_1*lado_2;
    return area;
  }
  float calcular_perimetro(){
    float perimetro=2*(lado_1+lado_2);
   return perimetro;
     }
    

};
int main (){
Cuadrilatero cuadrila1(5,6);
Cuadrilatero cuadrila2(7,10);
Cuadrilatero cuadrila3(16,17);
//modificacion de los lados 
cuadrila1.setLado_1(10);
cuadrila1.getLado_1();
cuadrila2.setLado_2(15);
cuadrila2.getLado_2();

//el area de cada uno  de los cuadrilateros 
cout <<"el area del primer cuadrilatero\n"<<cuadrila1.calcular_area()<<endl;;
cout<<"el area del segundo cuadrilatero\n"<<cuadrila2.calcular_area()<<endl;
cout<<"el area del tercer cuadrilatero\n"<<cuadrila3.calcular_area()<<endl;
 //el perimetro de cada cuadrilatero
 cout<<"el perimetro del primer cuadrilatero\n"<<cuadrila1.calcular_perimetro()<<endl;
 cout <<"el perimetro del segundo cuadrilatero\n"<<cuadrila2.calcular_perimetro()<<endl;
 cout<<"el perimetro del tercer cuadrilatero\n"<<cuadrila3.calcular_perimetro()<<endl;

 //sumatoria de las areas y perimetros de los 3 objetos 
 cout<<"la sumatoria de perimetro es :\n"<<cuadrila1.calcular_perimetro()+cuadrila2.calcular_perimetro()+cuadrila3.calcular_perimetro()<<endl;
 cout<<"la sumatoria de area es:\n"<<cuadrila1.calcular_area()+cuadrila2.calcular_area()+cuadrila3.calcular_area();
 
 return 0;
}
