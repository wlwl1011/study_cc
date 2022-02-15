#include <iostream>

void swap(int* input1, int* input2);
void swap(char* input1, char* input2);
void swap(double* input1, double* input2);

int main()
{
    int num1=20, num2=30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    char char1='A', char2='B';
    swap(&char1, &char2);
    std::cout<<char1<<' '<<char2<<std::endl;

    double double1=1.111, double2=2.222;
    swap(&double1, &double2);
    std::cout<<double1<<' '<<double2<<std::endl;
    return 0;
}

void swap(int* input1, int* input2)
{
    int temp =0;
    temp = *input1;
    *input1= *input2;
    *input2 = temp;
}

void swap(char* input1, char* input2)
{
    char temp =0;
    temp = *input1;
    *input1= *input2;
    *input2 = temp;
}

void swap(double* input1, double* input2)
{
    double temp =0;
    temp = *input1;
    *input1= *input2;
    *input2 = temp;
}