#ifndef RECTANGLE_INTERFACE_HPP
#define RECTANGLE_INTERFACE_HPP

#ifdef __cplusplus
extern "C" {
#endif

typedef void* RectangleHandler;
RectangleHandler* newRectangle(double width, double length);
void deleteRectangle(RectangleHandler pRect);
double getWidth(RectangleHandler pRect);
double getLength(RectangleHandler pRect);
void setWidth(RectangleHandler* pRect, double width);
void setLength(RectangleHandler* pRect, double length);
double getArea(RectangleHandler* pRect);
double getPerimeter(RectangleHandler* pRect);

#ifdef __cplusplus
}
#endif

#endif

// In this file, a void pointer has been defined first. It's just done for the sake of understandability. In the source file, the pointer is passed as it is,
// it's to say, as a void pointer, that's going to be casted within each function to the class that it's pointing at. This way, no class is ever mentioned
// explicitly in the interface code.
// As C code is never going to reference any class, type casting is done within each interface function. This way, the name of the class is never going to
// be typed in the pure C code.
// Be careful with include statements too: this file should never include class definition files, as it's going to be included in a pure C file.