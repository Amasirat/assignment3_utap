#include <iostream>

int main()
{
    std::string number{" 1-7i"};
    int count{0};
    int realpos{};
    int imagpos{};
    while(count < number.size())
    {
        if(number[count] == ' ')
        {
            ++count;
        }
        else if(number[count+1] != 'i')
        {
            realpos == count;
            ++count;
        }
        else
        {
            imagpos = count;
            ++count;
        }
    }
    number.erase();
    std::cout << number[0] << '\n';
   // double numberdouble {std::stod(number)};
   // std::cout << numberdouble << '\n';
    return 0;
}