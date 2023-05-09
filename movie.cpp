#include<iostream>
#include<string>
#include<movie.h>

using namespace std;

void movie::set_movie_name(string name){
    movie_name = name;
}

void movie::set_watch_count(int watched){
    watch_count = watched;
}

void movie::set_user_rating(int user_rate){
    user_rating = user_rate;
}

void movie::set_movie_rating(string movie_rate){
    movie_rating = movie_rate;
}

