#include <iostream>

inline int SQUARE(int input)
{
    return input* input;
}

int main()
{
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    return 0;
}