#include <stdio.h>
#include "main.h"
/**
 * print all alphabet with lower case
 * main - check the code
 *
 * Return: Always 0.
 *
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
       _putchar(letter);

_putchar('\n');

return (0);
}
