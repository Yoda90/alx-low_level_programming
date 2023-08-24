#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*reverse_array - function that reverses the content of an array of integers.
*@n : hold integer values
*@a: is a pointer
*Return:
*/
void reverse_array(int *a, int n)

{
	int left = 0;

	int right = n - 1;

	while (a[left] < a[right])
	{
		int temp = a[left];

		a[left] = a[right];

		a[right] =  temp;


		left++;
		right--;
	}
}
