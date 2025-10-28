#include <iostream>
int main()
{
    int x, y;
    std::cout << "Enter the first and second number\n";
    std::cout << "1.";
    std::cin >> x;
    std::cout << "1.";
    std::cin >> y;

    int add = x + y;
    int sub = abs(x-y);
    int mul = x * y;
    float div = (float)x/y;

    std::cout<<add<<std::endl<<sub<<std::endl<<mul<<std::endl<<div;
    return 0;
}