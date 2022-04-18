#include<iostream>
using namespace std;
class compteur
{
 public:
 static int count;
 public:
   compteur()
   {
     count++;
   }
};
int compteur::count = 0;
void essai(){
    compteur u,v;
}
int main()
{   
    compteur a;
    essai();
    compteur b;
    cout << compteur::count;
}