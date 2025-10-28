#include <iostream>
#include <cmath>
int main()
{
    int arr[5];
    std::cout << "Enter the numbers: ";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }
    int max = 0;
    int i = 5;
    while (i != 0)
    {
        max = std::max(max, arr[i]);
        i--;
    }
    std::cout << max;
    return 0;
}