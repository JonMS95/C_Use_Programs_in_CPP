#include "Rectangle.hpp"
// #include <iostream>

Rectangle::Rectangle(double width, double length)
{
    this->width     = width;
    this->length    = length;
}

Rectangle::~Rectangle()
{
    
}

double Rectangle::GetWidth()
{
    return this->width;
}

double Rectangle::GetLength()
{
    return this->length;
}

void Rectangle::SetWidth(double width)
{
    this->width = width;
}

void Rectangle::SetLength(double length)
{
    this->length = length;
}

double Rectangle::GetArea()
{
    return ( this->width * this->length );
}

double Rectangle::GetPerimeter()
{
    return ( ( this->width + this->length ) * 2 );
}