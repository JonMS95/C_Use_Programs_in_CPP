#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>

// In this file, the prototype of the "Rectangle" class is defined, as if it was about to be used in a pure C++ program.

class Rectangle
{
private:
    double width;
    double length;
public:
    Rectangle(double width, double length);
    ~Rectangle();
    double GetWidth();
    double GetLength();
    void SetWidth(double width);
    void SetLength(double length);
    double GetArea();
    double GetPerimeter();
};

#endif