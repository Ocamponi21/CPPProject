//pre-processor directives
#include <iostream>
#include <new>

//include header files
 #include "./headers/BasicIo.h"
 #include "./headers/Loops.h"
 #include "./headers/Decisions.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"
//#include "./headers/Circle.h"
#include "./headers/Cylinder.h"



//in C++ nampspacee is a collection of related functions,
//classes. objects, and variables

//the C++ standard library functions, classes, objects, and 
//variables are in a namescape named std

//a way to bring in a specified object, function class or variable of the std namespace into an application
//is with the help of the using declaration using std::cout;

//another way to bring in a specified object, function class or variable of the std namespace into an application
//is with the help of the using namespace statement  

using namespace std;

int main(){

    // int i, n;
    // int * p;
    // cout << "How many numbers would you like to type?";
    // cin >> i;
    // //this line of code is dynamically allocating memory 
    // p = new (nothrow) int [i];
    // if (p == nullptr) {
    //     cout << " Eroor: memory could not be allocated";
    // } else {
    //     for ( n = 0; n < 1; n++) {
    //         cout << "Enter number: ";
    //         cin >> p[n];
    //     }
    //     cout << "You have entered: ";
    //     for (n = 0; n < i; n++){
    //         cout << p[n] << ", ";
    //     }
    //     //this line of code is deallocating the memory 
    //     delete[]p;
    // }

    // in order to use a C++ bject, like cout, we need to 
    //specify that is belongs to the std namspace
    //one way to specify is by using the scope resoultion 
    //operator :: in conjunction with a reference to the 
    //name of the namespace 
    //std::cout << "Hello World!";

    /*Basic Input Output */
    //output();
    //input();

    /*Decisions*/
    //decisions1();

    /*Loops*/
    //loops1();

    /*Functions */
    // string student = "Nick Ocampo";
    // string language = "C++";
    // string programmer = "Bjarne Stroustoup";

    // congratulate1(student, language, programmer);

    /* Structs */
    // accessStructMembers();

    // //declare a Person struct 
    // Person p;

    // //initilize the Person struct fields 
    // p.heightInMeters = 1.8;
    // p.weightInKilos = 96;

    // //display computed BMI 
    // cout << "Computed BMI is " << bodyMassIndex(p) << endl;

    /* OOP */
    //declare and initalize a Circle object using no-arg constructor 
    Circle circle1;
    
    //declare local variable tha will be used when calling circle1's getter 
    int r;
    double a;

    //output contents of circle1 to stdout
    cout << "Circle 1: ";
    circle1.printCircle();


    //call circle1 setter to change radius
    circle1.setRadius(5);

    //output contents of circle1 to stdout
    cout << "Circle 1: ";
    circle1.printCircle();
    
    //call circle1 compute method to change area
    circle1.compute();

    //output contents of circle1 to stout 
    cout << "Circle 1: ";
    circle1.printCircle();

    //call circle1 getter methods
    //wehn calling getter hethods, must provide local variable as a argument 
    //the value in the radius field wil be placed by the getter method into the address
    //of the local variable 
    circle1.getRadius(r);
    cout << "Radius 1: " << r << endl;

    circle1.getArea(a);
    cout  << "Area1: " << a << endl;

    //declare and initalize Circle object using one-arg constructor 
    Circle circle2(3);

    //outpu contents of circle1 to stdout
    cout << "Circle 2: ";
    circle2.printCircle();

    //compute area of circle2
    circle2.compute();

    //outpu contents of circle1 to stdout
    cout << "Circle 2: ";
    circle2.printCircle();
    
    //output if circle1 is equal to circle2
    cout << std:: boolalpha;
    cout << "Circle 1 equals Circle 2? " << circle1.equalCircle(circle2) << endl;
    
    //or 
    //cout << "Circle 1 equals Circle 2? " << (circle1.equalCircle(circle2) == 0 ? "false" : "true") << endl;

    //declare and initilize a Cylinder objcet using the no-arg constructor 
    Cylinder cylinder1;

    //declare local variables that will be used when calling the cylinders
    //getter methods
    int h;
    double v;
    
    ///output the contents of the cylinder to stdout 
    cout << "Cylinder 1: ";
    cylinder1.printCircle();

    //set cylinder radius and compuet its area
    cylinder1.Circle::setRadius(5);
    cylinder1.Circle::compute();

    //output the contents of cylinder to stout 
    cout << "Cylinder 1: ";
    cylinder1.printCylinder();

    //set cylinders height and compute its volume 
    cylinder1.setHight(7);
    cylinder1.compute();

    //output the contents of cylinder to stdout 
    cout << "Cylinder 1: ";
    cylinder1.printCylinder();

    //call cylinder1 getter method 
    cylinder1.getHeight(h);
    cout << "Height 1: " << h << endl;
    cylinder1.getVolume(v);
    cout << "Volume 1: " << v << endl;

    //declare and initalize another cylinder using the two arg constructor
    Cylinder cylinder2(4,2);

    //output the contents of cylinder to stdout 
    cout << "Cylinder 2: ";
    cylinder2.printCylinder();

    //compute cylinder2 area and volume 
    cylinder2.Circle::compute();
    cylinder2.printCylinder();

    //output if cylinder1 euqals cylinder2
    cout << std:: boolalpha;
    cout << "Cylinder 1 equals Cylinder 2? " << cylinder1.equalCircle(cylinder2) << endl;

    return 0;
}
