#ifndef __MOVIE_H__
#define __MOVIE_H__

#include<string>

using namespace std;

class movie{
        friend class movies;
        string movie_name;
        int watch_count;
        string movie_rating;
        int user_rating;

    public:
        void set_movie_name(string name);
        void set_watch_count(int watched);
        void set_movie_rating(string movie_rate);
        void set_user_rating(int user_rate);
};

#endif