#include<stdio.h>
#include<string.h>
#include"movies.h"

#define RATING_LEN 10

void print_rating(rating_t rating);
rating_t get_rating();
void strip(char *);

void print_movie(const movie_t * movie)
{
    printf("  Title: %s", movie->title);
    printf("  Director: %s", movie->director);
    printf("  Year: %d ", movie->year);
    printf("  Rating: ");
    print_rating(movie->rating);
    printf("\n");
}

/* Read movie information from the user */
/* uses fgets which is safer than scanf or gets */
void get_movie(movie_t * movie)
{
    printf("Enter title: ");
    fgets(movie->title, TITLE_LEN, stdin);
    strip(movie->title);
    printf("Enter director: ");
    fgets(movie->director, DIRECTOR_LEN, stdin);
    strip(movie->director);
    printf("Enter Rating: ");
    movie->rating = get_rating();
    printf("Enter Release Year: ");
    scanf("%d", &movie->year);
}

/* Strip newline from string */
void strip(char * str) {
    while (*str != '\0') {
    if (*str == '\n') {
    *str = '\0';
    break;
    }
    str++;
    }
}
/* Helper function to print the rating based on the enum */
void print_rating(rating_t rating)
{
    switch(rating)
    {
    case(G):
    printf("G");
    break;
    case(PG):
    printf("PG");
    break;
    case(PG13):
    printf("PG-13");
    break;
    case(R):
    printf("R");
    break;
    default:
    printf("UR");
    }
}

/* Helper function to get the rating based on the string
     the user enters. */
rating_t get_rating()
{
    char rating_string[RATING_LEN];
    rating_t rating;

    fgets(rating_string, RATING_LEN, stdin);
    if (strncmp(rating_string, "G",1) == 0)
    rating = G;
    else if ( (strncmp(rating_string, "PG13",4) == 0) ||
           (strncmp(rating_string, "PG-13",5) == 0) )
        rating = PG13;
    else if (strncmp(rating_string, "PG",2) == 0)
        rating = PG;
    else if (strncmp(rating_string, "R",1) == 0)
        rating = R;
    else rating = UR;

    return rating;
}
