#include <iostream>
#include "Movie.hpp"
#include <string>
#include <vector>
using namespace std;

Movie::Movie(string name, string rating, int watched)//constructor
    : name(name) , rating(rating) , watched(watched) 
{
}

Movie::Movie(const Movie &source)
    : Movie{source.name , source.rating , source.watched} 
{
}

Movie::~Movie()
{
}

void Movie::display() const
{
    cout<< name << ", " << rating << ", " << watched <<endl;
}