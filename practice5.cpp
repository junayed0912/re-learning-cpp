#include <iostream>
#include <cmath>
int main()
{
    int arr[5] = {1, 3, 5, 10, 4};
    int max = 0;
    int i = 4;
    while(i >= 0)
    {
        max = std::max(max, arr[i]);
        i--;
    }
    std::cout << max;
    return 0;
}