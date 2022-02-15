#include <iostream>

namespace BestComImpl
{
    void simpleFunc()
    {
        std::cout<<"BestCom이 정의한 함수"<<std::endl;
    }
}

namespace ProgComImpl
{
    void simpleFunc()
    {
        std::cout<<"ProgCom이 정의한 함수"<<std::endl;
    }
}

int main()
{
    BestComImpl::simpleFunc();
    ProgComImpl::simpleFunc();
    return 0;
}