// Calls CS50 library
#include <cs50.h>
// Calls Standard Input/Output library
#include <stdio.h>

int main (void)
{

// Do-While validates the number entered by user
    int n;
    do
    {
        n = get_int("Enter a number between 1 and 8: ");
    }
    while (n < 1 || n > 8);


// For prints blocks on the screen
        for (int i = 0; i < n; i++){

// mario less
            for (int j = 0; j < n - i -1; j++){
            printf(" ");
            }

            for (int j = 1; j < i + 2; j++){
            printf("#");
            }

            printf("  ");

// mario inverse
            for (int j = 0; j > n - i -1; j++){
            printf(" ");
            }

            for (int j = 1; j < i + 2; j++){
            printf("#");
            }

        printf("\n");
        }
}
