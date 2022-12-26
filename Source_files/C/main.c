#include <stdio.h>
#include "../C++/multByTwo.hpp"
#include "../C++/RectangleInterface.hpp"

#define MSG_WIDTH                   "Rectangle width: %.2f\r\n"
#define MSG_LENGTH                  "Rectangle length: %.2f\r\n"
#define MSG_PERIMETER               "Rectangle perimeter: %.2f\r\n"
#define MSG_AREA                    "Rectangle area: %.2f\r\n"
#define MSG_NEW_WIDTH_AND_LENGTH    "Width and length of the rectangle are modified now to %f and %f\r\n"

#define NEW_RECTANGLE_WIDTH     10.1
#define NEW_RECTANGLE_LENGTH    6.3

void printRectangleMeasures(RectangleHandler pRect)
{
    printf(MSG_WIDTH    , getWidth(pRect)       );
    printf(MSG_LENGTH   , getLength(pRect)      );
    printf(MSG_PERIMETER, getPerimeter(pRect)   );
    printf(MSG_AREA     , getArea(pRect)        );
}

int main()
{
    int x = 4;
    printf("%d * 2 = %d\r\n", x, f(x));

    RectangleHandler myRect = newRectangle(3, 7);

    printRectangleMeasures(myRect);

    printf(MSG_NEW_WIDTH_AND_LENGTH,
    NEW_RECTANGLE_WIDTH,
    NEW_RECTANGLE_LENGTH);

    setWidth(myRect, NEW_RECTANGLE_WIDTH);
    setWidth(myRect, NEW_RECTANGLE_LENGTH);

    printRectangleMeasures(myRect);

    deleteRectangle(myRect);

    return 0;
}