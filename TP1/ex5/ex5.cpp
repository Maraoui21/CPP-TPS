#include<iostream>
#include<conio.h>
using namespace std;
// void test(int n=0,float x = 2.5);
void test(int x= 4.1,int n = 2);
int main(){

    int i=5;float r=3.2;
    test(i,r); // fonction N1
    test(r,i); // fonction N2
    test(i); // fonction N1
    test(r); // fonction N2
    // les appels suivants , ambigues sont rejeter par le compilateur
    test();
    test(i,i);
    test(r,r);
    // les initialisation par defaut de x a la valeur 4.1 
    // et de n a 0 sont inutilisables
    getch();

}
void test(int n=0,float x = 2.5){

    std::cout << "function N1 : ";
    std::cout << "n= "<< n <<" x="<<x<<"\n";

}

void test(int x= 4.1,int n = 2){
    std::cout << "Fonction N2";
    std::cout << "n= "<< n<< " x="<<x<<"\n";
}