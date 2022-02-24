#include <iostream>
using namespace std;

void addOne(int &temp)
{
    temp += 1;
}

void changeSign(int &temp)
{
    temp = -temp;
}

int main()
{
    int val = 0;
    addOne(val);
    cout << val << endl;
    changeSign(val);
    cout << val << endl;
    changeSign(val);
    cout << val << endl;

    return 0;
}