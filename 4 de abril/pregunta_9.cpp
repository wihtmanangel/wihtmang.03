#include <iostream>
using namespace std;
// funcion para imprimir la secuencia
void secuencia(int n){
	for(int i=1; i<=n; i ++){/*for para hasta que valor va a ser analizado el i*/
		
		if(i%3==0){/*if para saber si es multiplo de 3 y 5*/
			if(i%5==0){
				cout<<"FizzBuzz"<<endl;
			}else{             
				cout<<"Fizz"<<endl;/*aparece esto si solo es multiplo de 3 */
			}
		}
        else if(i%5==0){/*if para ver si es multiplo de 5 y3*/
			if(i%3==0){
				cout<<"FizzBuzz"<<endl;
			}else{
				cout<<"Buzz"<<endl;/*aparece este mensaje si solo es multiplo de 5*/
			}
		}else{
			cout<<i<<endl;
		}
	}
}


int main(){
	int num;/*de nuevo declaramos la variable numero*/
	do{
		cout<<"ingrese el un numero positivo "<<endl;
		cin>>num;	
	}while(num<0);/*condicion para que analize solo numeros positivos */
	secuencia(num);
	return 0;
}


