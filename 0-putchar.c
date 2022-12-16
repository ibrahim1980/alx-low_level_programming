#include <stdio.h>
/**
 *
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
 int main(void)
 {
	 char *putty = "0-putchar";
	 while (*putty)
	 {
		 _putchar(*putty);
		putty++;
	 }
	 _putchar('\n');

	 return (0);

 }

