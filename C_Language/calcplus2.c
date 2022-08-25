// Calls Math library
#include <math.h>

// Calls CS50 library
#include <cs50.h>

// Calls Standard Input/Output library
#include <stdio.h>

int main (void) {

    // Asks user for a kind of operation
    int usropt = get_int("Enter your calc option: \n""1 for Sum; \n""2 for Subtraction; \n""3 for Multiplication; \n""4 for Division. ");

    // Asks for first number value
    float getx = get_float("\nWrite first number: ");

    // Asks for second number value
    float gety = get_float("Write another number: ");


    // Case 1 - Sum
    if (usropt == 1) {

        // Sum of two numbers
        float sum = getx + gety;

        // Writes numbers sum for user
        printf("Sum result is: %.2f\n", sum);
    }


    // Case 2 - Subtraction
    if (usropt == 2) {

        // Subtraction of two numbers
        float sub = getx - gety;

        // Writes numbers subtraction for user
        printf("Subtraction result is: %.2f\n", sub);
    }


    // Case 3 - Multiplication
    if (usropt == 3) {

        // Multiplication of two numbers
        float multi = getx * gety;

        // Writes numbers multiplication for user
        printf("Multiplication result is: %.2f\n", multi);
    }


    // Case 4 - Division
    if (usropt == 4) {

        // Division of two numbers
        float div = getx / gety;

        // Writes numbers division for user
        printf("Division result is: %.2f\n", div);
    }
}