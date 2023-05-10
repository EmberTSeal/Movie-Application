#include<iostream>
#include<movie.h>
#include<movies.h>
#include<string>

using namespace std;

int main(){
    int choice;
    movies movie_list;
    string name, movie_rate;
    int user_rate, watched;
    while(1){
        cout << "Movie Manager:-" << endl;
        cout << "<1> Add a movie \n<2> Increase watch count \n<3> Display all movies \n";
        cout << "Enter your choice: " ;
        cin >> choice;
        switch(choice){
            case 1: cout << "Enter movie name: ";
                    cin >> name;
                    cout << "Enter movie rating: ";
                    cin >> movie_rate;
                    cout << "Enter watch count: ";
                    cin >> watched; 
                    cout << "Enter your rating: ";
                    cin >> user_rate;
                    movie_list.add_movie(name, movie_rate, user_rate, watched);
                    break;
            case 2: cout << "Enter movie name: ";
                    cin >> name;
                    movie_list.inc_watch_count(name);
                    break;
            case 3: movie_list.display_list();
                    break;
            default: cout << "Invalid input!\n";
        }
    }
    return 0;
}