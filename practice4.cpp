#include <iostream>
int main(){
     int val1;
    std::cout<<"Enter the number: ";
    std::cin>>val1;
    if(val1 < 0)
    {
        std::cout<<"Not a palindrome";
        return 0;
    }
    int val2 = 0;
    int val3 = val1;
    while(val1 != 0)
    {
        val2+= val1%10;
        val2 = val2*10;
        val1/=10;
    }
    val2 = val2/10;
    std::string result = (val2 == val3) ? "Palindrome" : "Not a palindrome";
    std::cout<<val3<<" is a "<<result;
    return 0;
}