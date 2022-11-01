#include <iostream>

void addTwo(int num);

int main()
{
    int myNum = 6;
    std::cout << "Main [before]: myNum = " << myNum << "\n";
    addTwo(myNum);
    std::cout << "Main [after]: myNum = " << myNum << "\n";
}

void addTwo(int num)
{
    num += 2;
    std::cout << "Function : num = " << num << "\n";
}