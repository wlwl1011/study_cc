#include <iostream>

int main()
{
    int soldMoney;
    int resultMoney;
    std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
    std::cin>>soldMoney;
    while(1)
    {
        if(soldMoney == -1)
        {
            std::cout<<"프로그램을 종료합니다."<<std::endl;
            break;
        }
        else
        {
            resultMoney = 50 + (soldMoney*0.12);
            std::cout<<"이번 달 급여: "<<resultMoney<<std::endl;

        }
        resultMoney = 0;
        soldMoney = 0;
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin>>soldMoney;
    }
    return 0;
}