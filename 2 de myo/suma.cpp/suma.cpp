#include<iostream>

using namespace std;

class Suma{
    private:
    int a ;
    int b;
    public:
    Suma (int _a , int _b){
        a=_a;
        b=_b;
    }
 int getA(){
    return a;
 }
 void setA(int _a){
    a=_a;
 }
 int getB(){
    return b;
 }
 void setB(int _b){
    b=_b;
 }
 int imprimir (int a , int b){
    return a+b;
 
}};