#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2, 7, 50, 9, 6};
    int sum = 0;
    int i = 0;
    while (i < 5)
    {
        sum = sum+arr[i];
        i++;
    }
    cout<<"The average is: "<<(float)sum/5;
    return 0;
}