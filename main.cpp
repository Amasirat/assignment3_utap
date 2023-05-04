#include <iostream>
#include "ComplexNumber.h"

int main()
{
    ComplexNumber num1{-5,0};
    ComplexNumber num2{1,0};
    ComplexNumber num3{num1 / num2};
    num3.show();
    std::cout <<'\n';
    std::cout << num1.absolute() << '\n';
    num2.show();
    std::cout <<'\n';
    num1.show();
    std::cout <<'\n';

    return 0;
}