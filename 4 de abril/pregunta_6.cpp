#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*declaramos la variable ingresenombres como void*/
void IngreseNombres(char datos[][50],int cantidad){
	for(int i=0; i<cantidad; i++){/*para ingresesar la cantidad de nombre que ingresaras*/
		fflush(stdin);/*flush es para limpiar el buffer*/
		cout<<"nombre "<<i+1<<" : " << endl;
		gets(datos[i]);
	}
}
/*declaramos la variable imprimirnombres como void*/
void Imprimir_Nombres(char datos[][50],int cantidad){
    cout<<"los nombres en orden son : "<<endl;
    char temp[50];
	for(int i=0; i<cantidad; i++){
		for(int j=i; j<cantidad; j++){
			if(strcmp(datos[i],datos[j])>0){
				strcpy(temp,datos[i]);
				strcpy(datos[i],datos[j]);
				strcpy(datos[j],temp);
			}
		}
	}
	for(int i=0; i<cantidad; i++){
		cout<<i+1<<". "<<datos[i]<<endl;
	}
}

int main() {
    int Cant;
    cout<<"Digite numero de palabras"<<endl;/*ingresa el nombre o apellido*/
    cin>>Cant;
	char Nombres[Cant][50];/*decalaramos la variable nombre como caracter*/
	IngreseNombres(Nombres,Cant);/*realizar toda la operacion en aquel funcion*/
	Imprimir_Nombres(Nombres,Cant);
	
    return 0;
}