#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {4, 9, 1, 3, 7};
    int max1 = arr[0];
    int max2 = arr[0]; 
    int i = 0;
    while(i <= 4)
    {
        if(max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(max1 > arr[i] && max2 < arr[i])
        {
            max2 = arr[i];
        }
       i++;
    }
    cout<<"The second largest number is: "<<max2;
    return 0;
}