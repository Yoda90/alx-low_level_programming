#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*reverse_array - function that reverses the content of an array of integers.
*@n : hold integer values
*@a: is a pointer holding integer values
*Return:
*/
void reverse_array(int *a, int n)

{
	int f;

	int l;

	f = (0);
	l = (n - 1);

	while (f < l)
	{
		int temp = a[f];

		a[f] = a[l];

		a[l] =  temp;


		f++;
		l--;
	}
}

