#include <stdio.h>
int main(void) { printf("Size of a char: %zu byte(s)\nSize of an int: %zu byte(s)\nSize of a long int: %zu byte(s)\nSize of a long long int: %zu byte(s)\nSize of a float: %zu byte(s)\n", sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float)); return 0; }
