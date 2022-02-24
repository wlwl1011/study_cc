#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr1[50] = "I am so happy";
    char arr2[100] = "Hi~ How are you :)";
    char copyArr[100];

    cout << strlen(arr1) << endl;
    cout << strcat(arr2, arr1) << endl;
    cout << arr2 << endl;
    cout << strcpy(copyArr, arr1) << endl;
    cout << strcmp(copyArr, arr1) << endl;
}
