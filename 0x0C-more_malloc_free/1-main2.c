#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
int main(void)

{
	char *s;
	s = string_nconcat("Hello", NULL, 12);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	s = string_nconcat(NULL, "Hello", 0);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	s = string_nconcat(NULL, NULL, 10);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
