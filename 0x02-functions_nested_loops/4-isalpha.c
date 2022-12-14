#include "main.h"
/**
 *_isalpha - Checks if a letter is an alphabet
 *@c: parameter
 *Return: Always 0 or 1
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
