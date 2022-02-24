#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char *makeStrAdr(int len)
{
    char *str = (char *)malloc(sizeof(char) * len);
    return str;
}

int main()
{
    char *str = makeStrAdr(20);
    strcpy(str, "I am so happy~");
    cout << str << endl;
    free(str);
    return 0;
}