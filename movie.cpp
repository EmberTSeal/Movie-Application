#include<iostream>
#include<string>
#include "movie.h"

using namespace std;

//constructors with constructor initialisation list:
movie::movie():
    movie_name{"Unnamed"}, movie_rating{"Null"}, user_rating{-1}, watch_count{0}{
    }

movie::movie(string name, string movie_rate, int user_rate, int watched):
    movie_name{name}, movie_rating{movie_rate}, user_rating{user_rate}, watch_count{watched}{
        cout << "\n";
    }

//other funcs:
void movie::increase_watch_count(){
    watch_count = watch_count + 1;
}

string movie::get_movie_name(){
    return movie_name;
}

string movie::get_movie_rating(){
    return movie_rating;
}

int movie::get_user_rating(){
    return user_rating;
}

int movie::get_watch_count(){
    return watch_count;
}