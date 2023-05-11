#include<string>
#include<vector>
#include<iostream>
#include "movie.h"
#include "movies.h"

using namespace std;

void movies::add_movie(string name, string movie_rate, int user_rate, int watched){
    for(auto it: movie_list){
        string movie_name = it.get_movie_name();
        if(movie_name == name){
            cout << "Movie already exists on list." << endl;
            return;
        }
    }
    movie new_movie(name, movie_rate, user_rate, watched);
    movie_list.push_back(new_movie);
}  

void movies::inc_watch_count(string name){
    for(auto &it: movie_list){
        string movie_name = it.get_movie_name();
        if(movie_name == name){
            it.increase_watch_count();
            cout << "Watch count increased by 1. \n\n";
            return;
        }
    }
    cout << "Movie was not found on the list. \n\n"; 
}

void movies::display_list(){
    if(movie_list.empty()){
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