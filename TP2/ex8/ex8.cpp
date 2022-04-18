#include<iostream>
#include<math.h>
using  namespace std;
class Complex
{
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex();

    // Constructor with 2 parameters
    Complex(double, double);
    void set(double, double);

    // Constructor with 1 parameter
    Complex(double);

    // Calculate the module of the complex number
    double modulus();

    // print the complex number to the console
    void print();
};

Complex::Complex()
{
    real = 0;
    imag = 0;
}
Complex::Complex(double real, double imag)
{
    this->real = real;
    this->imag = imag;
}
void Complex::set(double real, double imag)
{
    this->real = real;
    this->imag = imag;
}
Complex::Complex(double real)
{
    this->real = real;
    this->imag = 0;
}
double Complex::modulus()
{
    return sqrt(real * real + imag * imag);
}
void Complex::print()
{
    std::cout << real << " + " << imag << "i" << std::endl;
}
int main(){

    Complex c1(5, 22);
    Complex c2(5);
    std::cout << c1.modulus() << std::endl;
    c2.print();


}
