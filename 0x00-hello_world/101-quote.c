#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	char src[] = "and that piece of art is useful\"";
	char dest[]= "-Dora Korpar,2015-10-19";

	strncat(src,dest,23);
	printf(src);

	return 0;
}
