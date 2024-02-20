// pre-processor directives 
#include <iostream>
#include <string.h>

//use C++ standard Library
using namespace std;

// this function uses the strlen function in string.h
void congratulate2 (string student, string language, string programmer)
{
    // declare and initialize local variable by
    // calling strlen
    int days = programmer.length();

    // display a messaage to stdout
    printf("%s has done as much %s programming as %s could fit into %d days\n", student.c_str(), language.c_str(), programmer.c_str(), days);
}

void congratulate1(string student, string language, string programmer)
{
    // display a messaage to stdout
   //printf("%s has done as much %s programming as %s.\n", student, language, programmer);
   cout << student << " had done as much " << language << " programming as " << programmer << endl;
   congratulate2(student, language, programmer);
}


