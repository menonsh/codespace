#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for x
    int x = get_int("x: ");

    //Promt user for y
    int y = get_int("y: ");

    //Add x and y
    int z = x + y;
    printf("%i\n", z);
}