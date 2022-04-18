#include<iostream>
#include<cmath>
using namespace std;
class point{
private:
    int x;
    int y;
public:
    point(){this->x=0;this->y=0;}
    point(int X){this->x = X;this->y = 0;}
    point(int X,int Y){this->x=X;this->y=Y;}
    void coincidence(point *newPt){
        float d = sqrt(pow(this->x+newPt->x,2)+pow(this->y+newPt->y,2));
        cout << d;
    }
};
int main(){

    point p1=point(1,1);
    point *p2 = new point;
    *p2 = point(1,1);
    p1.coincidence(p2);
}