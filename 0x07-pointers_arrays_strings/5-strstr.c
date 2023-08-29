#include <stdio.h>
#include <string.h>

/**
 *_strstr - a function that locates a substring.
 *@haystack: main  string to be scanned
 *@needle: small string to be searched within haystack.
 *
 *Return: a pointer to the first occurrence in haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));

}
