#include <stdio.h>
#include "main.h"

int sum_array_recursion(int mass[], int n)
{
	if (n == 0) {
		return 0; 
	}
	return mass[n - 1] + sum_array_recursion(mass, n - 1); 
}

int sum_array_iteration(int mass[], int n, int counter)
{
	if (n == 0) {
		return counter;
	}
	return sum_array_iteration(mass, n - 1, counter + mass[n - 1]);
}