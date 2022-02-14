#include <iostream>
#define MAX 200
using namespace std;

struct USER
{
    char name[10];
    int totalMoney;
};
USER user[MAX] = {
    0,
};
int main()
{
    int input;
    int num = 0;
    cout << "-----Menu-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌번호 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
    cin >> input;
    while (1)
    {
        if (input == 1)
        {
            cout << "[계좌개설]";
            cout << "계좌ID: ";
            cin >> num;
            cout << "이름: ";
            cin >> user[num].name;
            cout << "입금액: ";
            cin >> user[num].totalMoney;
        }
        else if (input == 2)
        {
            int temp = 0;
            cout << "[입 금]";
            cout << "계좌ID: ";
            cin >> num;
            cout << "입금액: ";
            cin >> temp;
            user[num].totalMoney += temp;
        }
        else if (input == 3)
        {
            int temp = 0;
            cout << "[출 금]";
            cout << "계좌ID: ";
            cin >> num;
            cout << "출금액: ";
            cin >> temp;
            user[num].totalMoney -= temp;
        }
        else if (input == 4)
        {
            for (int i = 0; i < MAX; i++)
            {
                if (user[i].name != NULL)
                {
                    cout << "계좌ID: " << i << endl;
                    cout << "이름: " << user[i].name << endl;
                    cout << "잔액: " << user[i].totalMoney << endl;
                }
            }
        }
        else if (input == 5)
        {
            break;
        }
        else
        {
            cout << "잘못누르셨습니다." << endl;
        }

        input = 0;
        cout << "-----Menu-----" << endl;
        cout << "1. 계좌개설" << endl;
        cout << "2. 입 금" << endl;
        cout << "3. 출 금" << endl;
        cout << "4. 계좌번호 전체 출력" << endl;
        cout << "5. 프로그램 종료" << endl;
    }
}