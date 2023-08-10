#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char r;

	i = 'a';
	r = 'A';
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (r = 'A'; r <= 'Z'; r++)
		putchar(r);
	putchar('\n');
	return (0);
}
