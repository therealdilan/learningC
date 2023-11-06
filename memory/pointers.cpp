#include <iostream>

int main() 
{
    int firstNum = 32;
    int *pointer = &firstNum;

    std::cout << &firstNum << " " << firstNum << std::endl;
    std::cout << pointer << " " << *pointer << std::endl;

    *(&firstNum) = 16;

    std::cout << pointer << " " << *pointer << std::endl;

}   