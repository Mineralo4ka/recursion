#include <stdio.h>
#include "main.h"

int number_fib_rec_count(int A, int B, int n)
{
	if (n == 0 || n == 1) {
		return B;
	}
	return number_fib_rec_count(A, B, n - 1) + number_fib_rec_count(A, B, n - 2);
}

int number_fib_rec(int n)
{
	return number_fib_rec_count(1, 1, n);
}

int number_fib_it_count(int A, int B, int n)
{
	if (n < 0) {
		return B;
	}
	return number_fib_it_count(B, A + B, n - 1);
}

int number_fib_it(int n)
{
	return number_fib_it_count(1, 1, n - 2);
}