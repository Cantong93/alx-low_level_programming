#include "main.h"

/**
 * _islower - checks if a character is lowercase
 *@c: The character to be checked
 *
 *Return: 1 if character is lower case, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
