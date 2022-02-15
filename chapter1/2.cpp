#include <iostream>

int main()
{
    char name[10];
    char phoneNum[20];

    std::cout<<"what's your name? : ";
    std::cin>>name;
    std::cout<<"What's your phoneNumber? : ";
    std::cin>>phoneNum;

    std::cout<<"Name : "<<name<<std::endl;
    std::cout<<"Phone Number : "<<phoneNum<<std::endl;
    return 0;
}