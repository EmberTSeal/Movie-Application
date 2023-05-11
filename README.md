# Movie-Application
A movie list management system using CPP in OOP approach. 

## Features:
- Add a movie with movie rating, your rating and watch count
- Increase watch count for a given movie
- Display all movies in the list
- Detects duplicate movies, if such input provided

## Known Bugs:
- (None)

## Key Learnings
- Learn about OOP.
- For compiling multiple files in terminal; use 
```
g++ *.cpp
```
- This creates an executable named as "a.out". Run the program using
```
./a.out
```
- In case of range based for loops:
```
for(auto it: my_vec)    //this passes by value.
```
but,
```
for(auto &it: my_vec)   //passes by reference.
```
Clearly in my program, as I'm trying to change a movie's value stored in movie_list, I should use reference instead of value for it to actually change.