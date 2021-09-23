#include <iostream>
#include <iomanip>

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
        double r = width/2;
        return PI * r * r;
    }
};

int main()
{
    Triangle tri;

    tri.setWidth( 5 );
    tri.setHeight( 7 );

    Circle cir;

    cir.setWidth( 10 );
    cir.setHeight( 10 );

    //Print the area of the object.
    cout << "Total Triangle area: " << tri.getArea() << endl;
    cout << "Total Circle area: " << cir.getArea() << endl;

    return 0;
}
