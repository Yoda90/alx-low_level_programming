#include <ctype.h>
#include "main.h"
/**
*_isalpha -  function that checks for lowercase or uppercase character.
*@c: checking for lowercase or uppercase: characters.
* Return: (1) if islower otherwise zero
*/
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);

}

else

return (0);
}
