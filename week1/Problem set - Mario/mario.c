#include <stdio.h>
#include <cs50.h>

// method 1 - function to accpet user input within the 1 and 8 range
int get_valid_num(void)
{
    int height; // declare the variable outside the curly braces so that it can be used within the while statement
    while (true)
    {
        height = get_int("Enter height: \n");
        if (8 >= height && height >= 1)
        {
            break;
        }
    }
    return height; // a return value function must have the return statement
}

// method 2 - function to accpet user input within the 1 and 8 range
int get_valid_number(void)
{
    int height; // declare the variable outside the curly braces so that it can be used within the while statement
    do
    {
        height = get_int("Enter height: \n");
    }
    while (height > 8 || height < 1);

    return height; // a return value function must have the return statement
}


// function to build pyramid
void py(int height)
{
    for (int row_number = 0; row_number < height; row_number++)
    {
        for (int space = height - row_number - 1 ; space > 0 ; space--)
        {
            printf(" ");
        }
        
        for (int hash = 0; hash <= row_number; hash++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for (int r_hash = 0; r_hash <= row_number; r_hash++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}

int main(void)
{
    // valid_number();
    int height = get_valid_num();
    py(height);
}