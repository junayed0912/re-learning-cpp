#include <iostream>
int main(){
    int x;
    std::cout<<"Enter the number: ";
    std::cin>>x;
    std::string result = (x > 0) ? "Positive" :  (x < 0) ? "Negative" : "Zero";
    std::cout<<result;
    return 0;
}