#include <iostream>
#include <conio.h> 
using namespace std;
void echange(int &a,int &b) {
int tampon;
tampon = b;
b = a;
a = tampon;
cout<<"Pendant l'echange: a = "<< a <<" b = "<< b << endl; 
}

int main(){

int u=5,v=3;
cout<<"Avant echange: u v = "<<v<<endl;
echange(u,v);
cout<<"Apres echange: u = "<<u<<" y = "<<v<<endl;
getch() ; 

}
