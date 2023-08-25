#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 *cap_string - function that capitalizes all words of a string.
 *@ptr: is a strings.
 *
 *Return: ptr
 */
int is_separator(char c)
{
	int i;

    char separators[] = " \t\n,;.!?\"(){}";
    for ( i = 0; separators[i] != '\0'; ++i) {
        if (c == separators[i]) {
            return 1;
        }
    }
    return 0;
}

char *cap_string(char *ptr)
{
        size_t i;

        for (i = 0; i < strlen(ptr); i++)
        {
                if (is_separator(ptr[i - 1]) || i == 0)
                {
                        if (islower(ptr[i]))
                        {
                                ptr[i] = toupper(ptr[i]);
                        }
                }
                else if (isupper(ptr[i]))
                {
                        ptr[i] = tolower(ptr[i]);
                }
        }

        return (ptr);
}
