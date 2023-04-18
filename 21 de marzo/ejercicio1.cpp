#include<iostream>
using namespace std;
int main(){
    int matriz[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
 
    cout<<matriz[3][0]<<endl;
    cout<<matriz[5][4]<<endl;

    for (int i = 0; i < 5; i++)
        
    {
        for (int j= 0; j < 4; j++)
        {
            cout<<matriz[i][j]<<"|";
        }
        cout<<"/n";
    }
    
        
   return 0;

}