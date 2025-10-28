#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2, 7, 4, 9, 6};
    int oddCount = 0;
    int evenCount = 0;
    int i = 0;
    while (i < 5)
    {
        if(arr[i] % 2 == 0) evenCount++;
        else oddCount++;
        i++;
    }
    cout<<"Even count: "<<evenCount<<"\nOdd Count: "<<oddCount;
    return 0;
}