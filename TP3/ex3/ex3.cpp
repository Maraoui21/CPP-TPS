#include<iostream>
using namespace std;

class point{
private:
    int x;
    int y;
public:
    point(){this->x=0;this->y=0;}
    point(int X){this->x = X;this->y = 0;}
    point(int X,int Y){this->x=X;this->y=Y;}
    void affiche();
    void affiche(string chaine);
};

inline void point::affiche(){
    cout <<"X: "<<this->x<<endl;
    cout <<"Y: "<<this->y<<endl;
}
inline void point::affiche(string chaine){
    cout << "NAME : "<<chaine<<endl;
    affiche();
}

int main(){
    point p1;
    p1.affiche("P1");
}