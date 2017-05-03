#include <stdio.h>
#include "main.h"

int string(char *q, int c, int n)
{
	if (n == 0) {
		*(q + n) = c + 48;
		return 0;
	}

	*(q + n) = (c % 10) + 48;

	return string(q, c / 10, n - 1);
}