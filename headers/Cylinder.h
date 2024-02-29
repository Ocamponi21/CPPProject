// pre processor directives
#include "Circle.h"

// use C++ standard library namspace
using namespace std;

// declare a Cylinder class and specify that it is a subclass of Circle
// must speciffy the acess level of the superclass because its a concrete class
class Cylinder : public Circle
{
private:
    // declare fields
    int height;
    double volume;

public:
    // define constructors
    Cylinder()
    {
        // initalizing the radius and height to zero
        // when calling a super class member, the cla  must be
        // prefixed with the name of the super class and the
        // resolution operator
        this->Circle::setRadius(0);
        height = 0;
    }

    Cylinder(int radius, int height)
    {
        // check if we have been given an invalid radius - less
        // than zero
        if (radius < 0)
        {
            // throw an exception
            throw invalid_argument("Radius must be greater than or equal to zero.");
        }// check if we have been given an invalid radius - less
        // than zero
        if (height < 0)
        {
            // throw an exception
            throw invalid_argument("Height must be greater than or equal to zero.");
        }

        //initalize fields using provided arguments 
        this->Circle:: setRadius(radius);
        this->height = height;     
    }

    //define setter and getter methods for the height fields
    void setHight(int height)
    {
        // check if we have been given an invalid radius - less
        // than zero
        if (height < 0)
        {
            // throw an exception
            throw invalid_argument("Radius must be greater than or equal to zero.");
        }
            this->height = height;     

    }

    void getHeight(int& height) const
    {
        height = this ->height;
    }

    //define the getter for the volume field 
    void getVolume(double& volume) const
    {
        volume = this-> volume;
    }

    void compute() override
    {
        double a;
        this -> Circle::getArea(a);
        volume = height * a;
    }

    void printCylinder()
    {
        double a;
        this -> Circle::getArea(a);
        int r;
        this->Circle::getRadius(r);

        cout << fixed << showpoint;
        cout << setprecision(5);

        cout << "radius=" << r << ", area=" << height << ", volume=" << volume << endl;
    }

    bool equalCylinder(const Cylinder& otherCylinder) const
    {
        return (height == otherCylinder.height &&
        volume == otherCylinder.volume);
    }

};