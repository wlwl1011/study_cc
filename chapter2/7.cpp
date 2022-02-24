#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    srand(time(NULL));
    for (i = 1; i <= 5; i++)
    {
        cout << rand() % 100 << endl;
    }

    return 0;
}