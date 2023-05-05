#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <iostream>

class ComplexNumber
{
public:
    ComplexNumber(double real = 0.0 , double imag = 0.0);
//default destructor
    ~ComplexNumber() = default;
//show complex number in appropiate form
    void show() const;
//assign value to real part of the complex number
    void assign_real(double real);
//assign value to imaginary part of the complex number
    void assign_imag(double imag);
//get real number
    double real() const;
//get imaginary number
    double imag() const;
//get complex number in string and assign real and imaginary parts of the number to object
    void assign_string_num(std::string& number);
//calculate the absolute value of the complex number
    double absolute() const;
//static function to compare two numbers of ComplexNumber class
    static bool Compare(const ComplexNumber& num1, const ComplexNumber& num2)
    {
        return (num1.m_real == num2.m_real && num1.m_imag == num2.m_imag);
    }
//////////////////////////////////////////////////////////////
//Operator Overloading////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//Self summation
    ComplexNumber& operator+=(ComplexNumber& num);
//self subtraction
    ComplexNumber& operator-=(ComplexNumber& num);
//self multiplication
    ComplexNumber& operator*=(ComplexNumber& num);
//self division
    ComplexNumber& operator/=(ComplexNumber& num);
//four arithmetic operations for current object and another object, all return a ComplexNumber
    ComplexNumber operator+(ComplexNumber& num) const;
    ComplexNumber operator-(ComplexNumber& num) const;
    ComplexNumber operator*(ComplexNumber& num) const;
    ComplexNumber operator/(ComplexNumber& num) const;

private:
    double m_real{};
    double m_imag{};
};
#endif