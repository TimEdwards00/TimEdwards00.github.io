#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //TODO: Prompt for start size
    printf("Starting Population Size?\n");
    int start;
    do
    {
        start = get_int("Positive Integer at least 9\n");
    }
    while (start < 9);


    // TODO: Prompt for end size
    printf("Ending Population Size?\n");
    int end;
    do
    {
        end = get_int("Positive Integer > Starting Population\n");
    }
    while (end < start);


    // TODO: Calculate number of years until we reach threshold
    // int running = start
    // int years = 0
    // while running < end
    // running = running + running/3 - running/4
    // years ++

    int running = start;
    int years = 0;

    while (running < end)
    {
        running = running + running/3 - running/4;
        years++;
    }



    // TODO: Print number of years
    printf("Years: %i\n", years);
}
