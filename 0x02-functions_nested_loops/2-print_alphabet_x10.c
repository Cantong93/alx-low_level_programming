#include "main.h"
/**
* print_alphabet-prints 10 times the alphabet, in lowercase
*
*/
void print_alphabet_x10(void)
description: this prints print_alphabet_x10
{
int count = 0;
char letter;
while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
