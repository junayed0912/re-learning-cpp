#include <iostream>
struct car
{
    std::string name;
    std::string model;
    int realease_year;
}; 

int main()
{
    // struct
    // {
    //     int age = 99;
    //     std::string name = "roman";
    //     int year = 2070;
    // } myStructure;

    // std::cout<<myStructure.name<<std::endl<<myStructure.age<<std::endl<<myStructure.year;
    car myCar;
    myCar.name = "Koenigsegg";
    myCar.model = "Zesko Agera";
    myCar.realease_year = 2020;
    std::cout<<myCar.name<<std::endl<<myCar.model<<std::endl<<myCar.realease_year;
    
    return 0;
}