#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 2, 5, 3};
    int demo[6] = {0}; // assuming the element of the arr[] can only go upto 5.
    int i = 0;
    while (i < 5)
    {
        demo[arr[i]]++;
        i++;
    }
    for (int i = 0; i < 6; i++)
    {
        if (demo[i] != 0)
        {
            cout << i << " occurs " << demo[i] << " times" << endl;
        }
    }

    return 0;
}