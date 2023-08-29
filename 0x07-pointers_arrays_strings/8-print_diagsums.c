#include <stdio.h>
#include <string.h>

/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: is a string
 *@accept: is string containing characters to me matched in s.
 *
 *Return: the number of characters in the initial segment s.
 */
void print_diagsums(int *a, int size)
{
	int Diagonal1 = 0;
    int Diagonal2 = 0;
	int i = 0;
    
    for (i = 0; i < size - 1; i++) {
        
        Diagonal1 += a[i * size + i];

        
        Diagonal2 += a[i * size + (size - 1 - i)];
    }
    printf("Diagonal1: %d\n", Diagonal1);
    printf("Diagonal2: %d\n", Diagonal2);

}

