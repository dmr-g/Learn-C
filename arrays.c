#include <stdio.h>

//Массив - это набор элементов одного типа(упрощ.).

/*N = 4
N - N = MIN
N - 1 = MAX */

#define SIZE 100

int main (void)
{
	float prices[SIZE] = { 1000.0f, 2000.0f, 3000.0f, 4000.0f, };

	printf("0: %10.2f\n", prices[SIZE - SIZE]);
	printf("1: %10.2f\n", prices[1]);
	printf("2: %10.2f\n", prices[2]);
	printf("3: %10.2f\n", prices[SIZE - 1]);

	float price[SIZE] = { 0, 1, [99] = 100,};

	printf("0: %10.2f\n", price[0]);
	printf("1: %10.2f\n", price[1]);
	printf("2: %10.2f\n", price[2]);
	printf("99: %10.2f\n", price[99]);

	return 0;
	}