#include <iostream>
using namespace std;


class Shape
{
protected:
    double length;
    double area;
    
public:
    double getLength(){ return length; }
    double getArea(){ return area; }
};


class Shape_2D:public Shape
{
protected:
    double perimeter;
    
public:
    double getPerimeter(){ return perimeter;}
};

class Circle: public Shape_2D
{
public:
    Circle( double aRadius = 0)
    {
        length = aRadius;
        area = 3.14 * length * length;
        perimeter = 3.14 * 2 * length;
    }
};

class Square: public Shape_2D
{
public:
    Square( double aSize = 0)
    {
        length = aSize;
        area = length * length;
        perimeter = 4 * length;
    }
};

class Triangle: public Shape_2D
{
public:
    Triangle( double aSize = 0)
    {
        length = aSize;
        area = 0.433 * length * length;
        perimeter = 3 * length;
    }
};


class Shape_3D:public Shape
{
protected:
    double volume;
    
public:
    double getVolume(){ return volume; };
};

class Cube:public Shape_3D
{
public:
    Cube( double aSize = 0)
    {
        length = aSize;
        area = 6 * length * length;
        volume = length * length * length;
    }
};

class Sphere:public Shape_3D
{
public:
    Sphere( double aRadius = 0)
    {
        length = aRadius;
        area = 4 * 3.14 * length * length;
        volume = 4.0/3 * 3.14 * length * length * length;
    }
};

int main()
{
    Circle circ(2);
    std::cout << "  Circle: " << circ.getLength() << ' ' << circ.getPerimeter() <<  ' ' << circ.getArea() << '\n';
    
    Square squa(2);
    std::cout << "  Square: " << squa.getLength() << ' ' << squa.getPerimeter() <<  ' ' << squa.getArea() << '\n';
    
    Triangle tria(2);
    std::cout << "Triangle: " << tria.getLength() << ' ' << tria.getPerimeter() <<  ' ' << tria.getArea() << '\n';
    
    Cube cube(2);
    std::cout << "    Cube: " << cube.getLength() << ' ' << cube.getArea() << ' ' << cube.getVolume() << '\n';
    
    Sphere sphr(2);
    std::cout << "  Sphere: " << sphr.getLength() << ' ' << sphr.getArea() << ' ' << sphr.getVolume() << '\n';
    
    return 0;
}
