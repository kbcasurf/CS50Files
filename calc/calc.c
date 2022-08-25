// Calls CS50 library
#include <cs50.h>

// Calls Standard Input/Output library
#include <stdio.h>

int main (void)
{

    // Asks for first number value
    int getx = get_int("Write a number (1-10): ");

    // Asks for second number value
    int gety = get_int("Write another number (1-10): ");

    // Multiplication of two numbers
    int multi = getx * gety;

    // Writes numbers multiplication for user
    printf("Multiplication result is: %i\n", multi);

}