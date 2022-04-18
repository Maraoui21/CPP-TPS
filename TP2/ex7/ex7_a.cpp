#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

class hasard{
public:
    float val[10]={};
public:
    hasard(int a){
        srand(time(0));        
        for(int i=0;i<10;i++){

            int tmp = (rand() % a);
            val[i] = tmp;
        }

    }
    void showVal(){
        int i = 0;
        while (i <10)
        {
            cout <<" "<<val[i];
            i++;
        }
        
    }
};

int main(){

    hasard b= hasard(12);

    b.showVal();

}