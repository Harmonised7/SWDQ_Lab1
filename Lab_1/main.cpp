#include <iostream>

const double PI = 3.141592653589793238;

using namespace std;

//Base class

class Shape
{
    public:
        virtual double getArea() = 0;
        void setWidth( double w )
        {
            width = w;
        }

        void setHeight( double h )
        {
            height = h;
        }

    protected:
        double width, height;
};

class Triangle : public Shape
{
    public:
        double getArea()
        {
            return ( width * height ) /2;
        }
};

class Circle : public Shape
{
    public:
        double getArea()
        {
            return PI * radius * radius;
        }

        void setRadius( double r )
        {
            radius = r;
        }

    protected:
        double radius;
};

int main()
{
    Triangle tri;

    tri.setWidth( 5 );
    tri.setHeight( 7 );

    Circle cir;

    cir.setRadius( 5 );

    //Print the area of the objects.
    cout << "Total Triangle area: " << tri.getArea() << endl;
    cout << "Total Circle area: " << cir.getArea() << endl;

    return 0;
}
