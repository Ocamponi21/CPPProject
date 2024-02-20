//pre processor directives 
#include <iostream>
#include <string>

//define constants 
#define FIRST_NAME "Nick"
#define LAST_NAME "Ocampo"
#define AGE 20
#define WEIGHT 180.34

//use C ++ standard library namespace 
using namespace std;

// this function uses cout and the insertion operator
// to write data to stdout
void output(void){
    //cout is an object of the output stream of a C++
    //application that is used to output informatiom
    //to either the terminal or a file 
    //<< is he intersection operation and its used in conjunction 
    //with cout to show what is being output and to concatenate 
    //what is being output
    //a newline character isnt appended to the end of the 
    //output so we must use the end1 command 
    cout << "Your first name is " << FIRST_NAME << endl;
    cout << "Your last name is " << LAST_NAME << endl;
    cout << "Your age is " << AGE << endl;
    cout << FIRST_NAME << " ";
    cout << LAST_NAME << endl;
    
}

//this function uses cin and the extraction operator to input 
//data from stdin
void input (void){
    //declare variable to store inpute 
    int age;
    float weight;
    //C++ has a string type 
    string name;

    //prompt user for a int
    cout<< "Enter your age: ";
    //cin is an object of the input stream of a C++ application 
    //>> is the extraction operator and it is used to read input 
    //from the input stream and place it in a variabel 
    cin >> age;
    cout << "Entered age is: " << age << endl;

    cout << "Entered your weight: ";
    cin >> weight;
    cout << "Entered weight is: " << weight << endl;

    //promt user for an int and a float 
    cout << "Entered your age and your weight seperated by a space: ";
    cin >> age >> weight;
    cout << "Entered age is: " << age << " and entered weight is " << weight << endl;

    cout << "Entered your fullname: ";
    //cin stops reading a string when it encounters an empty space 
    //cin >> name ;
    //getline reads a full line from the input stream, including any spaces presented 
    //in the full line

    cin.ignore();
    getline(cin, name);
    cout << "Entered fullname is:  " << name << endl;
}