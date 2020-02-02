/******************************************************************
 * Movies.cpp driver
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.hpp"
#include <string>
using namespace std;

Movies::Movies() //Default Constructor
{
}
Movies::~Movies() //Destructor
{
}

  /*************************************************************************
    add_movie expects the name of the move, rating and watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    
    If it does then return false since the movie already exists
    Otherwise, create a movie object from the provided information
    and add that movie object to the movies vector and return true
    *********************************************************************/
bool Movies::add_movie(std::string name, std::string rating, int watched) 
{
	for (const Movie &movie : movies) //movie called by referance protected by const
	{
		if (movie.get_name() == name)
			return false;
	}
	Movie temp{ name,rating,watched };
	movies.push_back(temp);
	return true;
}

 /*************************************************************************
    increment_watched expects the name of the move to increment the
    watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    If it does then increment that objects watched by 1 and return true.

    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    *********************************************************************/
bool Movies::increment_watched(std::string name) 
{
	for (Movie &movie : movies)
	{
		if (movie.get_name() == name)
		{
			movie.increment_watched();
			return true;
		}		
	}
	return false;
}

/*************************************************************************
    display
    
    display all the movie objects in the movies vector.
    for each movie call the movie.display method so the movie
    object displays itself
    *********************************************************************/
void Movies::display() const 
{
	if (movies.size() == 0) {
		cout << "Sorry, no movies to display\n" << endl;
	}else {
		cout << "\n===================================" << endl;
		for (const auto &movie : movies)
			movie.display();
		cout << "\n===================================" << endl;
	}
} 