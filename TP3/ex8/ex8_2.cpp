#include<iostream>
#include<cmath>
using namespace std;

class vecteur{
float x,y; 
public: 
vecteur(float,float); 
vecteur* homotethie(float); 
void affiche(); 
float det(vecteur *vect2);
}; 
vecteur::vecteur(float abs,float ord){
    this->x=abs; this->y=ord; 

} 
vecteur* vecteur::homotethie(float val){
    x = x*val; y = y*val;
    vecteur *v1 = new vecteur(x,y); 
    return v1;
}
void vecteur::affiche() 
{
cout <<"x = "<<x<<" y = "<<y<<"\n"; 
}
float vecteur::det(vecteur *vect2){
    float deterrminat = (this->x*vect2->y)-(this->y*vect2->x);
    return deterrminat;
}

int main(){
    vecteur v1 = vecteur(1,2);
    v1 = *v1.homotethie(22);
    v1.affiche();
}