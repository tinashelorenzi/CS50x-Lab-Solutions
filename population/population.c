#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);  // Ensure start size is at least 9
    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);  // Ensure end size is not smaller than start size
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int population = start;
    while (population < end)
    {
        int born = population / 3;
        int passed_away = population / 4;
        population += born - passed_away;
        years++;
    }
    // TODO: Print number of years
    printf("Years: %d\n", years);

    return 0;
}
