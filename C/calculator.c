#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for x
    long x = get_int("x: ");

    //Promt user for y
    long y = get_int("y: ");

    //Add x and y
    long z = x + y;
    printf("%li\n", z);
}