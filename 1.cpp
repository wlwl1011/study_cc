#include <iostream>

int main()
{
    int size = 5;
    int val[size];
    int temp=0;
    int result=0;

    for(int i=1; i<=size; i++)
    {
        std::cout<<i<<"번째 정수 입력: ";
        std::cin>>temp;
        result+=temp;
        temp=0;
    }
    std::cout<<"합계 : "<<result<<std::endl;

    return 0;
}