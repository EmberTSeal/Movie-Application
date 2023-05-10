#ifndef __MOVIES_H__
#define __MOVIES_H__

#include<vector>
#include "movie.h"

using namespace std;
class movies{
        vector<movie> movie_list; 
    public:
        void add_movie(string name, string movie_rate, int user_rate, int watched);
        void inc_watch_count(string name);
        void display_list();
};  

#endif