#include<iostream>
using namespace std;

int main(){

    int mes_calen=0;

    do
    {
        cout<<"Digite el numero de mes: sea este del 1 al 12: "<<endl;
        cout<<"1) Enero\n 2)Febrero \n 3)Marzo \n 4)Abril \n 5)Mayo\n 6)Junio\n ";
        cout<<"7) Julio\n 8)Agosto \n 9)setiembre \n 10)Octubre\n 11)Noviembre\n12)Diciembre"<<endl;
        cin>>mes_calen;

        if (mes_calen<1 || mes_calen>12)
        {
            cout<<"Vuelva ingresar un numero valido"<<endl;
        }
        
    } while (mes_calen<1 || mes_calen>12);
    

    switch (mes_calen)
    {
    case 1:
        cout<<"Enero";
        break;
    case 2:
        cout<<"Febrero";
        break;
    case 3:
        cout<<"Marzo";
        break;
    case 4:
        cout<<"Abril";
        break;
    case 5:
        cout<<"Mayo";
        break;
    case 6:
        cout<<"Junio";
        break;
    case 7:
        cout<<"Julio";
        break;
    case 8:
        cout<<"Agosto";
        break;
    case 9:
        cout<<"Setiembre";
        break;
    case 10:
        cout<<"Octubre";
        break;
    case 11:
        cout<<"Noviembre";
        break;
    case 12:
        cout<<"Diciembre";
        break;
    
    default:
    cout<<"rango de mes no existente";
    }
    return 0;
}