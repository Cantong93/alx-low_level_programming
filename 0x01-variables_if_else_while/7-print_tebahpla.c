#include <stdio.h>


/**
 * main - prints the letters of the alphabets
 *
 * Return: 0
 */

int main(void)
{
/*Declarations*/
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
