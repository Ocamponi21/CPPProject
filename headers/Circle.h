//pre processor directives 
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <math.h>

#include "Geometry.h"

#define PI 3.141592653689793238

//use C++ standard library namspace 
using namespace std;

//declare Circle class and specify that its a subclass of Geometery 
class Circle : Geometry 
{
    private:
        //declare fields 
        int radius;
        double area;
    public:
        //declare constructors
        Circle();
        Circle(int);
        //declare a setter and getter method
        void setRadius(int);
        //this keyword const at teh end of the method 
        //declares the athe method wont chan ge any of the field values 
        //attempting to do so will result in a compiler error
        //the ampersand operator is getting the address in 
        //memory of its argument
        void getRadius(int&) const;
        //declare getter for area field 
        void getArea(double&) const;
        void compute() override;
        //declare tostring method
        void printCircle() const;
        //declare equal method 
        bool equalCircle(const Circle&) const;

};

//class constructors and methods may be defined outside of the class 
//in which they're declared 
//but when they are, thier names must be prefixed with the name of the 
//class and the resolution operator ::
Circle:: Circle()
{
    //initilize radius to zero 
    radius =0;

}

Circle:: Circle (int radius)
{
    //check if we have been given an invalid radius - less
    //than zero
    if (radius < 0) {
        //throw an exception
        throw invalid_argument("Radius must be greater than or equal to zero.");
    }

    //initalize radius to specified radius 
    this->radius = radius;
}

void Circle:: setRadius(int radius)
{
    //check if we have been given an invalid radius - less
    //than zero
    if (radius < 0) {
        //throw an exception
        throw invalid_argument("Radius must be greater than or equal to zero.");
    }

    //initalize radius to specified radius 
    this->radius = radius;
}

void Circle:: getRadius(int& radius) const
{
    // this->radius = 0.0;
    // this->area = 0.0;
    //place radius field value in specified radius 
    radius = this->radius;
}

void Circle:: getArea(double& area) const
{
    //place area field value in specified area 
    area = this -> area;
}

void Circle:: compute()
{
    area = M_PI * pow(radius, 2);
}

void Circle:: printCircle() const
{
    cout << fixed << showpoint;
    cout << setprecision(5);
    cout << "radis=" << radius << ", area-" << area << endl;

}
bool Circle:: equalCircle(const Circle& otherCircle) const
{
    return(radius == otherCircle.radius && 
        area == otherCircle.area);
}