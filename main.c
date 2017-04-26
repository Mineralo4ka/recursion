#include <stdio.h>

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

int main()
{	
	int arr[] = {1, 32, 54, -38, -4, 76, -8, 90};
	int N = sizeof(arr) / sizeof(int);
	int count = 0;

	printf("Массив: ");
	for (int i = 0; i < N; ++i) {
		printf("%d ", arr[i]);
	}
	//Задание 1
	printf("\nЗадание #1\nСумма элементов массива(рекурсия): %d\n", sum_array_recursion(arr, N));
	printf("Сумма элементов массива(итерация): %d\n", sum_array_iteration(arr, N, count));
	
	return 0;
}