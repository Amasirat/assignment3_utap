#include <iostream>

class ComplexNumber
{
    ComplexNumber(double real = 1.0 , double imag = 1.0);
    ComplexNumber(double imag);
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
    void assign_string_num(const std::string& number);
//static function to compare two numbers of ComplexNumber class
    static bool Compare(const ComplexNumber& num1, const ComplexNumber& num2);
//sum operation on object
    ComplexNumber& operator+(ComplexNumber num1);
private:
    double m_real{};
    double m_imag{};
};