// Mystring - starting point
#include <iostream>
#include "Mystring.hpp"

using namespace std;

int main() 
{
    Mystring empty;                      // no-args constructor
    Mystring larry("Larry");             // overloaded constructor
    Mystring stooge {larry};            // copy constructor 
    
    empty.display();
    larry.display();
    stooge.display();
    
    return 0;
}

