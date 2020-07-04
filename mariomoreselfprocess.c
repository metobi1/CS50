#include <stdio.h>
#include <cs50.h>


int main(void)
{
        int N;
        do
        {
            N = get_int("width ");
        }
        while (N < 1 || N > 8);
        for (int i = N; i >= 1; i--)
        {
            for (int j = i; j <= ((2 * N) + 2); j++)
            {
                if (j >= N + 1 && j <= N + i + 1)
                {
                    printf(" ");
                    continue;
                }
                printf("#");
            }
            puts("");
        }
}