#include <iostream>
using namespace std;

/*iniciaremos con una funcion tipo void donde introduciremos las 3 notas*/
void val_notas(float nota[]){
	for(int j=0; j<3; j++){/*utilizaremos un for para las veces que introducira la nota , es decir nota1 ,not2  y asi*/
		do{
			cout<<"Digite la nota "<<j+1<<" : ";/*el usuario introducira las notas */
			cin>>nota[j];
		}while(nota[j]<0 || nota[j]>20);/* el while es para ver el limite de las notas */
	}
}
/*esta funcion sera para hallar el promedio de las 3 notas*/
void promedio(float nota[]){
	float suma=0;/*para hallar el promedio su sumatoria lo inicializamos igualando a 0*/
	float promedio;
	for(int j=0; j<3; j++){
		suma = suma + nota[j];/**/
	}
	promedio = suma/3;/*la suma de las notas(3) lo dividimos entre  para hallar su promedio*/
	cout<<"PROMEDIO="<<promedio;/*el programa botara el resultado*/
}
int main(){
	float nota[3];/*nuevamente decalaramos float a la variable nota */
	val_notas(nota);
	promedio(nota);
	return 0;
}