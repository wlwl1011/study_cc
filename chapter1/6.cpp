#include <iostream>
int boxVolume(int length, int width, int height);
int boxVolume(int length, int width);
int boxVolume(int length);

int main()
{
    std::cout<<"[3, 3, 3] : "<<boxVolume(3, 3, 3)<<std::endl;
    std::cout<<"[5, 5, D] : "<<boxVolume(5, 5)<<std::endl;
    std::cout<<"[7, D, D] : "<<boxVolume(7)<<std::endl;
    return 0;
}

int boxVolume(int length, int width, int height)
{
    return length*width*height;
}

int boxVolume(int length, int width)
{
    return length*width;
}

int boxVolume(int length)
{
    return length;
}