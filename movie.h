#ifndef __MOVIE_H__
#define __MOVIE_H__

#include<string>

using namespace std;

class movie{
        string movie_name;
        int watch_count;
        string movie_rating;
        int user_rating;

    public:
        movie();    //constructor
        movie(string name, string movie_rate, int user_rate, int watched);  //overloaded constructor
        void increase_watch_count();    
        string get_movie_name();
        string get_movie_rating();
        int get_watch_count();
        int get_user_rating();
};

#endif