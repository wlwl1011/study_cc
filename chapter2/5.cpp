#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point &PntAdder(const Point &p1, const Point &p2)
{
    Point *result = new Point;
    result->xpos = p1.xpos + p2.xpos;
    result->ypos = p1.ypos + p2.ypos;

    return *result;
}

int main()
{
    Point *temp1 = new Point;
    Point *temp2 = new Point;

    temp1->xpos = 1;
    temp1->ypos = 1;
    temp2->xpos = 3;
    temp2->ypos = 3;
    cout << "result : ";

    Point &result = PntAdder(*temp1, *temp2);
    cout << result.xpos << " " << result.ypos << endl;

    return 0;
}