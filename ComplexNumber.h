#include <iostream>

class ComplexNumber
{
    ComplexNumber(double real = 1.0 , double imag = 1.0);
    ComplexNumber(double imag);
    ~ComplexNumber();
//show complex number in appropiate form
    void show();
//assign value to real part of the complex number
    void assign_real(double real);
//assign value to imaginary part of the complex number
    void assign_imag(double imag);
//get real number
    double real();
//get imaginary number



private:
    double m_real{};
    double m_imag{};
};