// Calls CS50 library
#include <cs50.h>

// Calls Standard Input/Output library
#include <stdio.h>

int main (void)
{
    // Asks user for a name
    string name = get_string("what's your name? ");

    // Shows user name with a greeting
    printf("Hello, %s\n", name);
}