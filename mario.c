#include <cs50.h>
#include <stdio.h>

// Reference the function at the bottom of the program
void space(int n);

int main(void)
{   // Get positive interger between 1 and 8
    int height;
    do
    {
        height = get_int("height: ");
    }
    while (height > 8 || height < 1);
   
    // Number of rows
    for (int i = 1; i <= height; i++)
        {   
        // Align Hashes to the right
        space(height - i);

        // Print Hash some number of times per row
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

// Print a specified number of spaces
void space(int n)
{
    for (int k = 0; k < n; k++)
    {
        printf(" ");
    }
}