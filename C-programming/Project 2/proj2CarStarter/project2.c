#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"mapobjects.h"
#include"map.h"
#include"basiclist.h"

#define BUFFERLEN 100

object_t * object_from_string(char * buff) {
    object_t * ret = malloc(sizeof(object_t));
    char * tok = strtok(buff, ",");
    printf("ENTRY : ");
    if(tok != NULL) {
        strncpy(ret->label, tok, LABEL_LEN);
        ret->xloc=atoi(strtok(NULL, ","));
        ret->yloc=atoi(strtok(NULL, ","));
        ret->speed=atof(strtok(NULL, ","));
        ret->direction=atof(strtok(NULL, ","));
        ret->type=string_to_type(strtok(NULL, ","));
    }
    print_object(ret);
    return ret;
}

void read_objects(node_t ** object_list) {

    FILE *fp;
    char buffer[BUFFERLEN];
    fp = fopen("objects.txt", "r");

    while (fgets(buffer, BUFFERLEN,fp)) {
        list_add(object_from_string(buffer), object_list);
    }
}

int main ()
{
    node_t * object_list = NULL;

    /*
    get_object(&objects[object_count]);
    */

    read_objects(&object_list);

    new_map(object_list, 30,16);
    print_map();

    /*  Uncomment the next 3 function calls as you implement them */
    /*
    printf("\nprint_objects():\n");
    print_objects(object_list);

    printf("\nfind_object(RedCar):\n");
    find_object(object_list, "RedCar");

    printf("\nfind_all_of_type(TREE):\n");
    find_all_of_type(object_list, TREE);
    */

    return 0;
}

