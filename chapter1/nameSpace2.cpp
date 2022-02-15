#include <iostream>

namespace BestComImpl
{
    void simpleFunc();
}

namespace ProgComImpl
{
    void simpleFunc();
}

int main()
{
    BestComImpl::simpleFunc();
    ProgComImpl::simpleFunc();
    return 0;
}

void BestComImpl::simpleFunc()
{
    std::cout<<"Best가 정의한 함수"<<std::endl;
}

void ProgComImpl::simpleFunc()
{
    std::cout<<"Prog가 정의한 함수"<<std::endl;
}