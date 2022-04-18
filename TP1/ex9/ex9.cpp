#include<iostream>
using namespace std;
typedef struct essai
{
    int n;
    float x;

}essai;
void remise_a_zero_Adress(essai* obj){
    obj->n = 0;
    obj->x = 0;
    cout << "PASSGE PAR ADDRESS" << " n= " << obj->n << " x= " << obj->x << endl; 
}   
void remise_a_zero_reff(essai &obj){
    obj.n = 0;
    obj.x = 0;
    cout << "PASSGE PAR refference" << " n= " << obj.n << " x= " << obj.x; 
}
int main(){
essai *a;
a = new essai;
essai  b;
remise_a_zero_Adress(a);
remise_a_zero_reff(b);
}