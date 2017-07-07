#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Part 1 --------------------------------------------
    int factorial, n;
    printf("Enter any number to find the factorial: ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("%d\n", factorial);

    // Part 2 --------------------------------------------
    int i, x;
    int counter = 1;

    printf("\nEnter a number between 1 and 50: ");
    scanf("%d", &x);

    if (x < 1 || x > 60){
        printf("\nInvalid entry. Reset program.");
    }
    else {
        for (i = 1; i <= x; i++){
            /* Skip number divisible by 11 */
            if (i % 11 == 0){
                printf("%d ", i);
                i = i + 1;
                continue;
                counter++;
            }
            if (i % 7 == 0){
                printf("[ ] ");
                counter++;
            }
            else if (i % 3 == 0 && i % 5 == 0){
                printf("fifteen ");
                counter++;
            }
            else if (i % 5 == 0){
                printf("five ");
                counter++;
            }
            else if (i % 3 == 0){
                printf("three ");
                counter++;
            }
            else {
                printf("%d ", i);
            /* Print 15 values per line */
                counter++;
                if ((counter + 1) % 10 == 0){
                    counter = 1;
                    printf("\n");
                }
            }
        }

    }
    // Part 3 --------------------------------------------
    int s, color;
    s = state(n);
    printf("\n\nRandom color with their states: \n");
    printf("%d = %d", s, color);

    return 0;
}

int fact(int n){
    int i;
    int f = 1;

    for(i = 1; i <= n; i++){
        f = f*i;
    }
    return(f);
}

int state(int n){
    int AR, TN, MS, AL, LA, red, blue, green;

    // Marking state positions by value
    AR = 1;
    TN = 2;
    LA = 3;
    MS = 4;
    AL = 5;

    // Marking colors by value
    red = 1;
    blue = 2;
    green = 3;

    // random number generator for colors
    int r = rand() % 3 + 1;

    // randomly assign color value to state
    // meeting condition where no two states
    // can be the same color.

    if ((n - 1) == RAND_MAX){
        return rand();
    } else {
        while (n != (n+1)){
            return r % n;
        }
    }
}
