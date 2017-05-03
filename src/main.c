#include <stdio.h>
#include "main.h"

int main()
{	
	int arr[] = {1, 32, 54, -38, -4, 76, -8, 90};
	int N = sizeof(arr) / sizeof(int);
	int count = 0, number = 0, num = 0, numeric = 0, j = 0;;

	printf("Массив: ");
	for (int i = 0; i < N; ++i) {
		printf("%d ", arr[i]);
	}
	
	printf("\nВведите число для ряда Фибоначчи: ");
	scanf("%d", &number);

	//Задание 1
	printf("\nЗадание #1\nСумма элементов массива(рекурсия): %d\n", sum_array_recursion(arr, N));
	printf("Сумма элементов массива(итерация): %d\n", sum_array_iteration(arr, N, count));

	//Задание 2
	printf("\nЗадание #2\n%d-ое число Фибоначчи(рекурсия) = %d\n", number, number_fib_rec(number));
	printf("%d-ое число Фибоначчи(итерация) = %d\n", number, number_fib_it(1, 1, number));

	//Задание 3
	printf("\nЗадание #3\nВведите число: ");
	scanf("%d", &num);

	numeric = num;

	while (numeric != 0) {
		numeric = numeric / 10;
		++j;
	}

	char *q = malloc(j * sizeof(char));
	int y = string(q, num, j - 1);

	if (y == 0) {
		printf("Строка: %s\n", q);
	}

	free(q);

	return 0;
}