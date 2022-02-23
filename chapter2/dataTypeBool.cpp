#include <iostream>
using namespace std;

bool IsPositive(int num)
{
    if (num <= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    bool isPos;
    int num;
    cout << "input number: ";
    cin >> num;

    isPos = IsPositive(num);
    if (isPos)
    {
        cout << "Positice number" << endl;
    }
    else
    {
        cout << "Negative number" << endl;
    }
    return 0;
}