#include <iostream>
void  MyFunc();
void  MyFunc(char input);
void  MyFunc(int input1, int input2);

int main()
{
    MyFunc();
    MyFunc('A');
    MyFunc(12,13);
    return 0;
}

void  MyFunc()
{
    std::cout<<"void  MyFunc() called."<<std::endl;
}

void  MyFunc(char input)
{
    std::cout<<"void  MyFunc(char input) called."<<std::endl;
}

void  MyFunc(int input1, int input2)
{
    std::cout<<"void  MyFunc(int input1, int input2) called."<<std::endl;
}