//pre processor directives 
#include <iostream>

//use C++ standard library namspace 
using namespace std;

//declare class
class Geometry 
{
    // class members (feilds, constructors, methods) may have 
    // the following odifiers: public, private, protected 
    // this class is going to be an abstract class (like a 
    //Java interface) b/c its only method is going to be a virtual 
    //it will have a declaration only and not a body)

    public:
        //must use keywords virtual when delcaring a virtual 
        //method and must initilize it to zero .
    virtual void compute() = 0;


};