#include<iostream>
#include<cmath>
using namespace std;

class vecteur{
float x,y; 
public: 
vecteur(float,float); 
void homotethie(float); 
void affiche(); 
float det(vecteur &vect2);
}; 
vecteur::vecteur(float abs,float ord){
this->x=abs; this->y=ord; 
} 
void vecteur::homotethie(float val){
    x = x*val; y = y*val; 
}
void vecteur::affiche() 
{
cout <<"x = "<<x<<" y = "<<y<<"\n"; 
}
float vecteur::det(vecteur &vect2){
    float deterrminat = (this->x*vect2.y)-(this->y*vect2.x);
    return deterrminat;
}
int main(){
    vecteur v1 = vecteur(1,2);
    vecteur v2 = vecteur(1,3);
    cout << v1.det(v2);
}