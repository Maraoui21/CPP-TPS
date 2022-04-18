#include<iostream>
using namespace std;

class point{
public:
    string color;
    float x;
    float y;
    void Initialiser(string Color,float X,float Y){
        color = Color;
        this->x = X;
        this->y = Y;
    }
    void Deplacer(float newX,float newY){
        this->x = newX;
        this->y = newY;
    }
    void Afficher(){
        cout << "POINT DATA :"<<endl;
        cout << "color: "<<this->color<<endl;
        cout <<"X = "<< this->x << endl;
        cout <<"Y = "<< this->y << endl;
    }
    void effacer(){
        this->color = "";
        this->x = 0;
        this->y = 0;
    }
};

int main(){

    point a;
    a.Initialiser("red",12,5);
    a.Afficher();
    a.Deplacer(22,23);
    a.Afficher();
    a.effacer();
    a.Afficher();
}