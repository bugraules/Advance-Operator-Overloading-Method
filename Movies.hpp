#ifndef _MOVIES_HPP_
#define _MOVIES_HPP_

#include <iostream> 
#include <string>
#include <vector>
#include "Movie.hpp"
using namespace std;

class Movies
{
	friend class Movie;//Modified by BU
private:
	vector<Movie> movies;
public:
    Movies();//Default Constructor
    ~Movies();//Constructor
    
	//Operationals
	/*************************************************************************
	add_movie expects the name of the move, rating and watched count

	It will search the movies vector to see if a movie object already exists
	with the same name.

	If it does then return false since the movie already exists
	Otherwise, create a movie object from the provided information
	and add that movie object to the movies vector and return true
	*********************************************************************/
    bool add_movie(string name , string rating , int watched);

	/*************************************************************************
	increment_watched expects the name of the move to increment the
	watched count

	It will search the movies vector to see if a movie object already exists
	with the same name.
	If it does then increment that objects watched by 1 and return true.

	Otherwise, return false since then no movies object with the movie name
	provided exists to increment
	*********************************************************************/
    bool increment_watched(string name);

	/*************************************************************************
	display

	display all the movie objects in the movies vector.
	for each movie call the movie.display method so the movie
	object displays itself
	*********************************************************************/
    void display() const;
};
#endif // _MOVIES_H_
