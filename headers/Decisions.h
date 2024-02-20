//pre processor directives 
#include <iostream>
#include <iomanip>

//use C ++ standard library namespace 
using namespace std;

//create macro values (constants)
#define NUM 34568.8

// write code for functions declared in Decisions.h
// this function uses the camparision operators
//  and the if, if-else, and the if-else-if statement
void decisions1(void)
{
    // declare variables of tyoe float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    //show decimal point notation and trailing zero on cout
    cout << fixed << showpoint;

    //show decimal point notation and traling zero on cout
    cout << setprecision(3);

    // use an if statment
    if (num < 40000.0)
    {
        //printf("%.1f is less than 40000.0\n", num); // yes displayed
        cout << num << " is less than 40000.0" << endl;
    }

    // change the value in the variable
    num += num;

    // use an if-else statement
    if (num < 40000.0)
    {
        //printf("%.1f is less than 40000.0\n", num); // not displayed
        cout << num << " is less than 40000.0" << endl;
    }
    else
    {
        //printf("%.1f is not less than 40000.0\n", num); // displayed
         cout << num << " is not less than 40000.0" << endl;
    }

    // change value in variable
    num = 0;

    // use an if-else-if statment
    if (num == 0.0)
    {
        //printf("%.1f is equal to 0.0\n", num); // displayed
        cout << num << " is equal to 0.0" << endl;
    }
    else if (num < 0.0)
    {
        //printf("%.1f less than 0.0\n", num); // not displayed
        cout << num << " is less than to 0.0" << endl;
    }
    else
    {
        //printf("%.1f greater than 0.0\n", num); // not displayed
        cout << num << " is greater than 0.0" << endl;
    }
}

