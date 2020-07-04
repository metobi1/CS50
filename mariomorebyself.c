#include <stdio.h>
#include <cs50.h>


int main(void)
{
        int N;

        // Get positive integer between 1 and 8
        do
        {
            N = get_int("width ");
        }
        while (N < 1 || N > 8);

        // Number of rows
        for (int i = N; i >= 1; i--)
        {
            // Print hashes per row
            for (int j = i; j <= ((2 * N) + 2); j++)
            {

                /* Print the spaces between hashes that help make up the shape
                First logic to seperate the two shapes and Seconf Logic in bracket
                to carve out the shape to the left*/
                if (j == N + i || j == N + i + 1 || (j >= i && j <= (2 * i) - 2))
                {
                    printf(" ");
                    continue;
                }

                // The Hashes making up the full shape body
                printf("#");
            }
            // The Rows
            puts("");
        }
}