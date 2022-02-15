#include <iostream>

namespace BestComImpl
{
    void simpleFunc();
}

namespace BestComImpl
{
    void prettyFunc();
}

namespace ProgComImpl
{
    void simpleFunc();
}

int main()
{
    BestComImpl::simpleFunc();
    return 0;
}

void BestComImpl::simpleFunc()
{
    std::cout<<"BestCom이 정의한 함수"<<std::endl;
    prettyFunc();
    ProgComImpl::simpleFunc();
}

void BestComImpl::simpleFunc()
{
    std::cout<<"So pretty!"<<std::endl;
}

void ProgComImpl::simpleFunc()
{
    std::cout<<"Prog가 정의한 함수"<<std::endl;
}