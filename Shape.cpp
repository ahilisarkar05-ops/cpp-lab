#include <iostream>
using namespace std;

class Shape
{
    float radius, length, width;

public:
    // Constructor for circle
    Shape(float r)
    {
        radius = r;
    }

    // Constructor for rectangle
    Shape(float l, float w)
    {
        length = l;
        width = w;
    }

    void circlePerimeter()
    {
        cout << "Perimeter of Circle = " << 2 * 3.14 * radius << endl;
    }

    void rectanglePerimeter()
    {
        cout << "Perimeter of Rectangle = "
             << 2 * (length + width) << endl;
    }

    // Destructor
    ~Shape()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    Shape circle(5);
    circle.circlePerimeter();

    Shape rectangle(10, 5);
    rectangle.rectanglePerimeter();

    return 0;
}