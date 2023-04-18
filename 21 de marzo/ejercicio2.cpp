#include <iostream>
using namespace std;

void mostrar_matriz(int sumato[5][4], int fila, int columna){
    for (int i = 0; i < 5; i++)

    {
        for (int j = 0; j < 4; j++)
        {
            cout << sumato[i][j] << "|";
        }
        cout <<endl;
    }
}

int sumato(int matriz_suma[5][4], int fila, int columna)
{
    int sumato= 0;
    for (int i = 0; i < fila; i++)

    {
        for (int j = 0; j < columna; j++)
        {
            sumato= sumato + matriz_suma[i][j];
        }
    }
    return sumato;
}

int sum_fila(int matriz[5][4],int fila,int columna){
    int suma_fila1=0;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            suma_fila1 += matriz[i][j];
        }
        
    }
    return suma_fila1;

}
void mostrar_fila1(int matriz[5][4],int fila,int columna){
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            cout<<matriz[i][j]<<"|";
        }
        
    }
    
}

int sum_columna(int matriz[5][4],int fila,int columna){
    int suma_columnas=0;
    for (int j = 0; j < columna; j++)
    {
        for (int i = 0; i < fila; i++)
        {
            suma_columnas += matriz[i][j];
        }
        
    }
    return suma_columnas;

}
int main()
{
    int matriz[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};

    cout << matriz[3][0] << endl;
    cout << matriz[5][4] << endl;

    
    int sum = sumato(matriz, 5,4);
    mostrar_matriz(matriz, 5,4);
    cout  << sum<<endl;
    
    
    return 0;
}
