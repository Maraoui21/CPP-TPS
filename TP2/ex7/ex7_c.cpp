#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

class hasard{
    int *val;
public:
    hasard(int max,int nbrVal){
        int *val = new int[nbrVal];
        srand(time(0));        
        for(int i=0;i<nbrVal;i++){

            int tmp = (rand() % max);
            val[i] = tmp;
        }
        int i=0;
        while (i<nbrVal)
        {   
            cout <<val[i] << " ";
            i++;
        }
        
    }
    ~hasard(){
        delete val;
        cout <<endl<<"table is deleted";
    }
};

int main(){

    hasard b= hasard(12,6);

}