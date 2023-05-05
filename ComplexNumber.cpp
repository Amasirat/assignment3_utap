#include "ComplexNumber.h"
#include <string>
#include <math.h>
#include <iostream>


//Constructor
ComplexNumber::ComplexNumber(double real, double imag) : m_real{real}, m_imag{imag}
{}
//show complex number in appropiate form
void ComplexNumber::show() const
{
    if(m_imag > 0)
    {
        if(m_imag == 1)
        {
            if(m_real == 0)
            {
                std::cout << "+i";
            }
            else
            {
                std::cout << m_real << "+i";
            }
        }
        else
        {
            if(m_real == 0)
            {
                std::cout << m_imag << "i";
            }
            else
            {
                std::cout << m_real << '+' << m_imag << "i";
            }
        }
    }
    else if(m_imag == 0)
    {
        std::cout << m_real;
    }
    else
    {
        if(m_imag == -1)
        {
            if(m_real == 0)
            {
                std::cout << "-i";
            }
            else
            {
                std::cout << m_real << "-i";
            }
        }
        else
        {
            if(m_real == 0)
            {
                std::cout << m_imag << "i";
            }
            else
            {
                std::cout << m_real << m_imag << "i";
            }
        }
    }
}
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
void ComplexNumber::assign_string_num(std::string& number)
{
    double real{std::stod(number)};
    double imag{};
    char imag_sign{};
    int pos{0};
    if(number[pos] == '+' || number[pos] == '-')
    {
        number = number.erase(pos, pos + 1);
        std::cout << number << '\n';
    }
    while(pos < number.size())
    {
        if(number[pos] == '+' || number[pos] == '-')
        {
            imag_sign = number[pos];
            break;
        }
        else
        {
            ++pos;
        }
    }
    number = number.erase(0,pos + 1);
    imag = std::stod(number);

    if(imag_sign == '-')
        imag = -(imag);

        m_real = real;
        m_imag = imag;
}
//calculate the absolute value of the complex number
    double ComplexNumber::absolute() const
    {
        return sqrt(pow(m_real, 2) + pow(m_imag, 2));
    }
//sum current object with another object
ComplexNumber& ComplexNumber::operator+=(ComplexNumber& num)
{
    m_real += num.m_real;
    m_imag += num.m_imag;
    return *this;
}
//self subtraction
    ComplexNumber& ComplexNumber::operator-=(ComplexNumber& num)
    {
        m_real -= num.m_real;
        m_imag -= num.m_imag;
        return *this;
    }
//self multiplication
    ComplexNumber& ComplexNumber::operator*=(ComplexNumber& num)
    {
        (m_real += num.m_real);
        return *this;
    }
//self division
    ComplexNumber& ComplexNumber::operator/=(ComplexNumber& num)
    {
        return *this;
    }

//four arithmetic operations for current object and another object, all return a ComplexNumber
ComplexNumber ComplexNumber::operator+(ComplexNumber& num) const
{
    return ComplexNumber(m_real + num.m_real, m_imag + num.m_imag);
}
ComplexNumber ComplexNumber::operator-(ComplexNumber& num) const
{
    return ComplexNumber(m_real - num.m_real, m_imag - num.m_imag);
}
ComplexNumber ComplexNumber::operator*(ComplexNumber& num) const
{
    return ComplexNumber((m_real * num.m_real) - (m_imag * num.m_imag), 
    (m_real * num.m_imag + m_imag * num.m_real));
}
ComplexNumber ComplexNumber::operator/(ComplexNumber& num) const
{
    if(num.absolute() == 0)
    {
        return ComplexNumber(0,0);
    }
    return ComplexNumber(((m_real * num.m_real) + (m_imag * num.m_imag)) / pow(num.absolute(), 2), 
    ((m_imag * num.m_real) - (m_real * num.m_imag)) / pow(num.absolute(), 2));
}