//Calculates the number of years for the llama population to grow from a start size to an end size

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;

    //Prompt user for start size (9 or greater)
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    //Prompt user for end size greater than start value
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);


    int pop = start;
    int n = 0;

    //If the sizes are equal, n will be 0
    if (start == end)
    {
        n = 0;
    }
    // Calculates the time to grow to end size
    else
    {
        do
        {
            pop = pop + pop / 3 - pop / 4;
            n += 1;
        }
        while (pop < end);
    }

    printf("Years: %i\n", n);
}

