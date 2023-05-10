#include<iostream>
#include<string>
#include "movie.h"

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

void movie::increase_watch_count(){
    watch_count++;
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