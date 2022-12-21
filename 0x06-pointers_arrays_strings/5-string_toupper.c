#include "main.h"
/**
 *string_toupper - Changes lowercase to uppercase
 *@s: Parameter
 *Return: string
 */
char *string_toupper(char *s)
{
int i;
i = 0;
while (*(s + i))
{
if (*(s + i) >= 'a' && (*(s + i) <= 'z'))
*(s + i) -= 'a' - 'A';
i++;
}
return (s);
}
