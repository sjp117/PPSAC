// Implament my own version of the ctype's isupper and tolower functions

#include <stdio.h>

#define INPUTLENGTH 20

int my_isupper(char c);
char my_tolower(char c);

int main(int argc, char *argv[])
{
    char userInput;

    // Get user input
    printf("Enter a single character: ");
    scanf_s("%c", &userInput);

    if (my_isupper(userInput))
    {
        printf("%c is upper case.\n", userInput);
        printf("The lower case of %c is %c.\n", userInput, my_tolower(userInput));
    }
    else
    {
        printf("%c is lower case.\n", userInput);
    }
}

int my_isupper(char c)
{
    if (c >= 65 && c <= 90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char my_tolower(char c)
{
    if (my_isupper(c))
    {
        return c + 32;
    }
    else
    {
        return c;
    }
}