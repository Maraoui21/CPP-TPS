#include<iostream>
using namespace std;
float puissance(float x,float n);
int main(){

cout << puissance(2,-1);


}
float puissance(float x,float n){
    int p=1;
    if(n<0){
        n*=-1;
        for(int i=0;i<n;i++){
        p=p*x;
    }
    return 1/(float)p;
    }
    if(n==0){return 1;}
    for(int i=0;i<n;i++){
        p=p*x;
    }

    return p;
}