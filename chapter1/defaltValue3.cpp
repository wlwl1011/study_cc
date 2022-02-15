#include <iostream>
int boxVolume(int length, int width=1, int height=1);
int main()
{
    std::cout<<"[3, 3, 3] : "<<boxVolume(3, 3, 3)<<std::endl;
    std::cout<<"[5, 5, D] : "<<boxVolume(5, 5)<<std::endl;
    std::cout<<"[7, D, D] : "<<boxVolume(7)<<std::endl;
   /* compile error
   std::cout<<"[D, D, D] : "<<boxVolume()<<std::endl;
   */
    return 0;
}

int boxVolume(int length, int width, int height)
{
    return length*width*height;
}