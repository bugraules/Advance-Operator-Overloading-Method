#ifndef _MOVIE_HPP_
#define _MOVIE_HPP_

#include <iostream> 
#include <string>
#include <vector>
#include "Movies.hpp"
using namespace std;

class Movie
{
private:
    string name;
    string rating;
    int watched;
public:
    Movie(string name , string rating , int watched);//Constructor for 3 attributes
    Movie(const Movie &source); //Copy Constructor 
    ~Movie();//Destructor
    
    //Inline implemented Operationals
	void set_name(std::string name) { this->name = name; }
	std::string get_name() const { return name; }

	void set_rating(std::string rating) { this->rating = rating; }
	std::string get_rating() const { return rating; }

	void set_watched(int watched) { this->watched = watched; }
	int get_watched() const { return watched; }

	// Simply increment the watched attribute by 1
	void increment_watched() { ++watched; }

	// simply displays the movie information ex.) Big, PG-13, 2
	void display() const;
};

#endif // _MOVIE_H_