#include<iostream>
using namespace std;

class point{
public:
    string color;
    float x;
    float y;
    void Initialiser(float X=13,float Y=15){
        this->x = X;
        this->y = Y;
    }
    void Deplacer(float newX=12,float newY=22){
        this->x = newX;
        this->y = newY;
    }
    void Afficher(){
        cout << "POINT DATA :"<<endl;
        cout <<"color : "<<this->color <<endl;
        cout <<"X = "<< this->x << endl;
        cout <<"Y = "<< this->y << endl;
    }
    void effacer(){
        this->color = "none";
        this->x = 0;
        this->y = 0;
    }
    void test(){
        this->Initialiser();
        this->Afficher();
        this->Deplacer();
        this->Afficher();
    }
    
    ~point(){
        cout << "OBJECT LIFE IS ENDED";
    }   
};

int main(){

    point a;
    a.test();

}