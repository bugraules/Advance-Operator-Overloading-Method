#include <cstring> //C-style string
#include <iostream>
#include "Mystring.hpp"

using namespace std;

// No-args constructor 
Mystring::Mystring() 
    : str{nullptr} //my char pointer points noth!
{
    str = new char[1];//C-Style array/pointer 
    *str = '\0';//char terminator value in there as an only and lonely element :)
 }

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str {nullptr} 
{
        if (s==nullptr) 
        {
            str = new char[1];

            *str = '\0';
        } 
        else 
        {
            str = new char[strlen(s)+1];
            strcpy_s(str, strlen(s) + 1, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
     : str{nullptr} 
{
        str = new char[strlen(source.str )+ 1];
        strcpy_s(str, strlen(source.str) + 1, source.str); //strscpy_s() is more secure against strcpy()
        /*Because of When you try to copy a string using strcpy(), to a buffer which is not large enough to contain it, it will cause a buffer overflow.*/
}

// Destructor
Mystring::~Mystring() 
{
    delete [] str;
}

// Display method
void Mystring::display() const 
{
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
 int Mystring::get_length() const { return strlen(str); }
 
  // string getter
 const char *Mystring::get_str() const { return str; }




