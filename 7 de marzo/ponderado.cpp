#include<iostream>

using namespace std;

int promedio (int nota1, int nota2, int nota3){
    int nota_promedio;
    nota_promedio=(nota1+nota2+nota3)/3;

    return nota_promedio;
}

int main(){
    int nota1,nota2,nota3;
    char rango;

    cout<<"Digite la primera nota: ";
    cin>>nota1;

    cout<<"Digite la segunda nota: ";
    cin>>nota2;

    cout<<"Digite la tercera nota: ";
    cin>>nota3; 

    if (promedio(nota1,nota2,nota3)>=18)
    {
        rango='A';
    }

    if (promedio(nota1,nota2,nota3)>15 && promedio(nota1,nota2,nota3)<18 )
    {
        rango='B';
    }

     if (promedio(nota1,nota2,nota3)>11 && promedio(nota1,nota2,nota3)<=15 )
    {
        rango='C';
    }

     if (promedio(nota1,nota2,nota3)>5 && promedio(nota1,nota2,nota3)<=11 )
    {
        rango='F';
    }

     if (promedio(nota1,nota2,nota3)>=0 && promedio(nota1,nota2,nota3)<=5 )
    {
        rango='G';
    }

    switch (rango)
    {
    case 'A':
        cout<<"Felicitaciones, tienes: A";
        break;
     case 'B':
        cout<<"Felicitaciones, tienes: B";
        break;

    case 'C':
        cout<<"Bien hecho, tienes: C";
        break;

    case 'F':
        cout<<"Sigue estudiando, tienes: F";
        break;

    case 'G':
        cout<<"ANIMOS SIGUE ESTUDIANDO, tienes: G";
        break;
    default:
        cout<<"NO EXISTE RANGO";
        break;
    }
    return 0;
    
}