#include "RectangleInterface.hpp"
#include "Rectangle.hpp"

RectangleHandler* newRectangle(double width, double length)
{
    Rectangle* newRectangle = new Rectangle(width, length);
    return (RectangleHandler*)newRectangle;
}

void deleteRectangle(RectangleHandler pRect)
{
    delete (Rectangle*)pRect;
}

double getWidth(RectangleHandler pRect)
{
    return ((Rectangle*)pRect)->GetWidth();
}

double getLength(RectangleHandler pRect)
{
    return ((Rectangle*)pRect)->GetLength();
}

void setWidth(RectangleHandler* pRect, double width)
{
    return ((Rectangle*)pRect)->SetWidth(width);
}

void setLength(RectangleHandler* pRect, double length)
{
    return ((Rectangle*)pRect)->SetWidth(length);
}

double getArea(RectangleHandler* pRect)
{
    return ((Rectangle*)pRect)->GetArea();
}

double getPerimeter(RectangleHandler* pRect)
{
    return ((Rectangle*)pRect)->GetPerimeter();
}