

//code:
#include<bits/stdc++.h>
using namespace std;
class Quadrilateral{
    protected:
        double a,b,c,d,e;
    public:
        Quadrilateral(double a=0.0,double b=0.0,double c=0.0,double d=0.0,double e=0.0)
        {
            this->a=a;
            this->b=b;
            this->c=c;
            this->d=d;
            this->e=e;
        }
        virtual double area()=0;
        virtual double perimeter()=0;
};
class Trapezoid:public Quadrilateral
{
    public:
        Trapezoid(double a=0.0,double b=0.0,double c=0.0,double d=0.0,double e=0.0):Quadrilateral(a,b,c,d,e)
        {}
    double area()
    {
        return (1/2.0)*((this->a+this->c)*this->e);
    }
    double perimeter()
    {
        return this->a+this->b+this->c+this->d;
    }
};
class Parellelogram:public Quadrilateral
{
    public:
        Parellelogram(double a=0.0,double b=0.0,double c=0.0,double d=0.0,double e=0.0):Quadrilateral(a,b,c,d,e)
        {}
    double area()
    {
        return c*a;
    }
    double perimeter()
    {
        return 2*(a+b);
    }
};
class Square:public Quadrilateral
{
    public:
        Square(double a=0.0,double b=0.0,double c=0.0,double d=0.0,double e=0.0):Quadrilateral(a,b,c,d,e)
        {}
        double area()
        {
            return a*a;
        }
        double perimeter()
        {
            return 4*a;
        }
};
class Rectangle:public Quadrilateral
{
    public:
        Rectangle(double a=0.0,double b=0.0,double c=0.0,double d=0.0,double e=0.0):Quadrilateral(a,b,c,d,e)
        {}
        double area()
        {
            return a*b;
        }
        double perimeter()
        {
            return 2*(a+b);
        }
};
int main()
{
    Trapezoid trp(5,12,4,15,3);
    Square sqr(5);
    Rectangle rect(5,8);
    Parellelogram parl(5,12,6);
    cout<<"Trapezoid "<<"Area "<<trp.area()<<" perimeter "<<trp.perimeter()<<endl;
    cout<<"Square Area "<<sqr.area()<<" perimeter "<<sqr.perimeter()<<endl;
    cout<<"Rectangle area "<<rect.area()<<" perimeter "<<rect.perimeter()<<endl;
    cout<<"Parellelogram area "<<parl.area()<<" perimeter "<<parl.perimeter()<<endl;
    return 0;
}

 /*           -----------------------------------------quadrilateral--------------------------------------
            ^              ^                                        ^                                  ^
            |              |                                        |                                  |
            |              |                                        |                                  |
            |              |                                        |                                  |
            trapezoid     parallelogram                             rectangle                       square
            */
