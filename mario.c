// Including libraries
#include <cs50.h>
#include <stdio.h>

// Prompt user to get valid input
int valid_input(void);

int main(void)
{
    // Getting the valid input from user
    int height = valid_input();

    // Making and printing the pyramid
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        if (i + j < height - 1)
        {
            printf(" ");
        }
        else
        {
            printf("#");

        }
        printf(" ");
        printf(" ");
        for (int j = 1; j < height + 1; j++)
        if (i + j > height - 1)
        {
            printf("#");
        }
        printf("\n");
    }
}









int valid_input(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}