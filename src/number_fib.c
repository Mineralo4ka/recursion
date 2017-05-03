#include <stdio.h>
#include "main.h"

int number_fib_rec(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}

	return number_fib_rec(n - 1) + number_fib_rec(n - 2);
}

int number_fib_it(int a, int b, int n)
{
	if (n == 1) {
		return a;
	}

	return number_fib_it(a + b, a, n - 1);
}