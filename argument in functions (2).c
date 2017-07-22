#include <stdio.h>

unsigned short sum (char a, char b)
{
	return a + b;
}

short sub(char x, char y)
{
	return x - y;
}
void main (void)
{
	printf("Sum:\r\n");
	printf("%i\r\n", sum(2, 2));
	printf("%i\r\n", sum(5, 5));

	printf("Substract:\r\n");
	printf("%i\r\n", sub(5, 2));
	printf("%i\r\n", sub(10, 4));

	return;
}

/*
#include <stdio.h>

void main (void)
{
	char total = 0;
	char a = 4;
	char b = 2;
	total=a*b;
	printf("%i", total);
	return;
	}
*/