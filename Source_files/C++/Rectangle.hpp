#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>

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

// In this file, the prototype of the "Rectangle" class is defined, as if it was about to be used in a pure C++ program. Note that a class definition and an
// include statement referencing a pure C++ library appear in this file. Thus, this file could never be included in a pure C file.