#include<iostream>
using namespace std;
void affiche(float x,int n){
    double p=1;
    if(n==0){
        cout << 1;
    }
    else
    {
    for(int i=0;i<n;i++){p*=x;}
    cout << p;
    }
}
void affiche(float x,int n){
    double p=1;
    if(p==0){
        cout << 0;
    }
    else
    {
    for(int i=0;i<n;i++){p*=x;}
    cout << p;
    }
}
int main(){

    affiche(0,5);

}