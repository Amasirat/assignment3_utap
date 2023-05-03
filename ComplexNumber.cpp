#include "ComplexNumber.h"
#include <string>
#include <iostream>

//Constructors
ComplexNumber::ComplexNumber(double real, double imag) : m_real{real}, m_imag{imag}
{}
ComplexNumber::ComplexNumber(double imag) : m_imag{imag}
{}
//show complex number in appropiate form
//void ComplexNumber::show() const
//{

//}
//assign value to real part of the complex number
void ComplexNumber::assign_real(double real)
{
    m_real = real;
}
//assign value to imaginary part of the complex number
void ComplexNumber::assign_imag(double imag)
{
    m_imag = imag;
}
//get real number
double ComplexNumber::real() const {return m_real;}
//get imaginary number
double ComplexNumber::imag() const {return m_imag;}
//get complex number in string and assign real and imaginary parts of the number to object
void ComplexNumber::assign_string_num(const std::string& number)
{
    
}