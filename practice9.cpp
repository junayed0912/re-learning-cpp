#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2, 7, 4, 9, 6};
    int oddSum = 0;
    int evenSum = 0;
    int i = 0;
    while (i < 5)
    {
        if(arr[i] % 2 == 0) evenSum = evenSum + arr[i];
        else oddSum = oddSum + arr[i];
        i++;
    }
    cout<<"Even sum: "<<evenSum<<"\nOdd sum: "<<oddSum;
    return 0;
}