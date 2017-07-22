#include <stdio.h>
#define SIZE 4

void showArrayAdressess(float array[])
{
	printf("0: %p\r\n", &array[0]);
	printf("1: %p\r\n", &array[1]);
	printf("2: %p\r\n", &array[2]);
	printf("3: %p\r\n", &array[3]);

	return;
}

void showArrayAdressessByPointer(float * array)
{
	printf("0: %p\r\n", &array[0]);
	printf("1: %p\r\n", &array[1]);
	printf("2: %p\r\n", &array[2]);
	printf("3: %p\r\n", &array[3]);
	return;
}

int main (void)
{

	//index access
	float prices[4] = { 1000.0, 2000.0, 3000.0, 4000.0, };

	printf("\r\n[*] Index access:\r\n");

	printf("0:%.2f\r\n", prices[0]);
	printf("1:%.2f\r\n", prices[1]);
	printf("2:%.2f\r\n", prices[2]);
	printf("3:%.2f\r\n", prices[3]);

	printf("\r\n[*] Pointer access:\r\n");

	printf("0:%.2f\r\n", *(prices + 0));
	printf("1:%.2f\r\n", *(prices + 1));
	printf("2:%.2f\r\n", *(prices + 2));
	printf("3:%.2f\r\n", *(prices + 3));

	size_t floatSize = sizeof(float);
	size_t intSize = sizeof(int);
	size_t charSize = sizeof(char);

	printf("\r\nFloat Size: %zu bytes\r\n", floatSize);
	printf("Int Size: %zu bytes\r\n", intSize);
	printf("Char Size: %zu bytes\r\n", charSize);

	printf("\r\nPrices Size: %zu bytes\r\n\r\n", sizeof prices);

	showArrayAdressess(prices);
	showArrayAdressessByPointer(prices);

	return 0;
}