#include<string>
#include<vector>
#include<iostream>
#include "movie.h"
#include "movies.h"

using namespace std;

//defining member functions for class movies

//add a movie to movie list
void movies::add_movie(string name, string movie_rate, int user_rate, int watched){
    for(auto it: movie_list){   
        string movie_name = it.get_movie_name();
        if(movie_name == name){     //prevent duplicate movie in list
            cout << "Movie already exists on list." << endl;
            return;
        }
    }
    //if duplicate not found, create new movie object - call constructor
    movie new_movie(name, movie_rate, user_rate, watched);
    //add movie to movie list
    movie_list.push_back(new_movie);
}  

//increase watch count of given movie
void movies::inc_watch_count(string name){
    //using iterator of type reference (&it) instead of value (it) for changes to take place
    for(auto &it: movie_list){      
        string movie_name = it.get_movie_name();
        if(movie_name == name){     
            it.increase_watch_count();
            cout << "Watch count increased by 1. \n\n";
            return;
        }
    }
    //in case movie was not found on the list
    cout << "Movie was not found on the list. \n\n"; 
}

//display all movies
void movies::display_list(){
    if(movie_list.empty()){ //in case list is empty
        cout << "No movies in the list.\n\n";
        return;
    }
    for(auto it: movie_list){
        cout << "Movie: " << it.get_movie_name() << endl;
        cout << "Movie rating: " << it.get_movie_rating() << endl;
        cout << "User rating: " << it.get_user_rating() << endl;
        cout << "Watch count: " << it.get_watch_count() << "\n\n"; 
    }
}