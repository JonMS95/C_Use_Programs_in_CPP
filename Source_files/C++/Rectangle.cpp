#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double length)
{
    this->width     = width;
    this->length    = length;
}

Rectangle::~Rectangle()
{
    std::cout << "Rectangle object destroyed!\n";
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