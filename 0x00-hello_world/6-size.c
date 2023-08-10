#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %zu byte(s)\n"
           "Size of an int: %zu byte(s)\n"
           "Size of a long int: %zu byte(s)\n"
           "Size of a long long int: %zu byte(s)\n"
           "Size of a float: %zu byte(s)\n",
           sizeof(char), sizeof(int), sizeof(long), sizeof(long long),
           sizeof(float));
    return (0);
}
