//pre processor directives 
#include <iostream>

//a struct is a collection of related fields 
//the fields may be of different types
//declare a struct for a Person that has two fields

struct Person
{ 
    //declare feilds 
    float heightInMeters;
    int weightInKilos;
};

//use a type definition todeclare a struct
// a typedefinition defines an alias for a stuct 
// that allows the alias to be uses like a primitive 
//data type
typedef struct 
{
    //declare feilds 
    float heightInMeters;
    int weightInKilos;

} PersonType; // this is the alias 

//use C ++ standard library namespace 
using namespace std;

//this fuction uses the Person struct for purposes 
//of displaying the values in its fields
void accessStructMembers(void){
    //declare a Person struct 
    Person person;

    //initialize the struct fields 
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;

    //display the values in the struct fields
    cout << "Person's weight is " << person.weightInKilos << " kilograms" << endl;
    cout << "Person's height is " << person.heightInMeters << " meters" << endl;

    //declare a Person struct using the type definition and alias 
    PersonType p;
    //initialize the struct fields 
    p.heightInMeters = 1.8;
    p.weightInKilos = 96;

    //display the values in the struct fields
    cout << "Person's weight is " << p.weightInKilos << " kilograms" << endl;
    cout << "Person's height is " << p.heightInMeters << " meters" << endl;
    
}

//this function has a Person struct parameter 
//it will compute ans return the BMI of a Person 
float bodyMassIndex(struct Person p) {
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}
