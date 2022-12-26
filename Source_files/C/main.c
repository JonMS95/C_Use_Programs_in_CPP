#include <stdio.h>
#include "../C++/multByTwo.hpp"
#include "../C++/RectangleInterface.hpp"

#define NEW_RECTANGLE_WIDTH     10.1
#define NEW_RECTANGLE_LENGTH    6.3

void printRectangleMeasures(RectangleHandler pRect)
{
    printf("Rectangle width: %.2f\r\n", getWidth(pRect));
    printf("Rectangle length: %.2f\r\n", getLength(pRect));
    printf("Rectangle perimeter: %.2f\r\n", getPerimeter(pRect));
    printf("Rectangle area: %.2f\r\n", getArea(pRect));
}

int main()
{
    int x = 4;
    printf("%d * 2 = %d\r\n", x, f(x));

    RectangleHandler myRect = newRectangle(3, 7);

    printRectangleMeasures(myRect);

    printf("Width and length of the rectangle are modified now to %f and %f\r\n",
    NEW_RECTANGLE_WIDTH,
    NEW_RECTANGLE_LENGTH);

    setWidth(myRect, NEW_RECTANGLE_WIDTH);
    setWidth(myRect, NEW_RECTANGLE_LENGTH);

    printRectangleMeasures(myRect);

    deleteRectangle(myRect);

    return 0;
}