#include <iostream>
int main(){
    int x;
    std::cout<<"Enter the number: ";
    std::cin>>x;
    int sum = 0;
    while(x != 0)
    {
        sum+= x%10;
        x/=10;
    }
    std::cout<<sum;
    return 0;
}