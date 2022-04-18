#include<iostream>
using namespace std;

class point{
public:
    string color;
    float x;
    float y;
    void Initialiser(string Color = "blue",float X=13,float Y=15){
        color = Color;
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
};

int main(){

    point a;
    a.test();

}