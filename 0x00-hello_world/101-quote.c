#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	char str1[] = "and that piece of art is useful\"";
	char str2[]= "-Dora Korpar,2015-10-19";

	strncat(str1,str2,23);
	printf(str1);

	return 1;
}
