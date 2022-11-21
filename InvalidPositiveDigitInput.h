#pragma once
#include <exception>

class InvalidPositiveDigitInput :
    public std::exception
{
public:
    InvalidPositiveDigitInput(const char* errorMessage) : exception(errorMessage)
    {
        std::cout << "� ���� ������, �� ������ ����� �� ����!\n";
    }
};

