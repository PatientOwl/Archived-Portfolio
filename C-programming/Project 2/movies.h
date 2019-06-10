#ifndef MOVIES_H
#define MOVIES_H

#include<stdio.h>

#define TITLE_LEN 50
#define DIRECTOR_LEN 50

typedef enum {G, PG, PG13, R, UR} rating_t;

typedef struct {
        char      title[TITLE_LEN];
        char      director[DIRECTOR_LEN];
        int       year;
        rating_t  rating;
} movie_t;

void print_movie(const movie_t * movie);
void get_movie(movie_t * movie);

#endif
