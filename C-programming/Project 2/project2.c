#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"movies.h"
#include"basiclist.h"

void print_movies(node_t * list)
{
    node_t * curr;
    curr = list;

    while (curr != NULL)
    {
      print_movie((movie_t *)curr->data);
      curr = curr->next;
    }
}

void directed_by(node_t * list, const char * director)
{
    node_t * curr;
    movie_t * movie;
    curr = list;

    while (curr != NULL)
    {
        movie = (movie_t *) curr->data;
        if (strncmp(director, movie->director, DIRECTOR_LEN) == 0)
        {
            printf("%s (%d)\n", movie->title, movie->year);
        }
        curr = curr->next;
    }
}

void rated(node_t * list, rating_t rating)
{
    node_t * curr;
    movie_t * movie;
    curr = list;

    while (curr != NULL)
    {
        movie = (movie_t *) curr->data;
        if (movie->rating == rating)
        {
            print_movie(movie);
        }
        curr = curr->next;
    }
}

int main ()
{
    int ii;
    int movie_count = 5;
    node_t * movie_list = NULL;
    movie_t * new_movie;

    movie_t movies[10] = {
                {"Goodfellas", "Martin Scorsese", 1990, R},
                {"Inside Out", "Pete Docter", 2015, PG},
                {"The Dark Knight", "Christopher Nolan", 2008, PG13},
                {"Guardians of the Galaxy", "James Gunn", 2014, PG13},
                {"Dick Tracy", "Warren Beatty", 1990, PG},
    };


    for (ii=0;ii<movie_count;ii++)
    {
        list_add(&movie_list, &movies[ii]);
    }

    new_movie = malloc(sizeof(movie_t));
    get_movie(new_movie);
    list_add(&movie_list, new_movie);
    movie_count ++;

    printf("\nMovies:\n");
    print_movies(movie_list);

    printf("\nMovies directed by Christopher Nolan:\n");
    directed_by(movie_list, "Christopher Nolan");

    printf("\nMovies Rated PG:\n");
    rated(movie_list, PG);
    return 0;
}

