#include<iostream>
using namespace std;
class A
{
 public:
 static int count;
 public:
   A()
   {
     count++;
   }
};
int A::count = 0;
int main()
{
 A obj1,obj2,obj3,obj4;
 cout<<"LE NOMBRE D'OBJECT CREE EST = ";
 cout<<A::count;
}