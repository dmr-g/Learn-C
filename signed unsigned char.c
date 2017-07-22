#include <stdio.h>

char getNumber (void)
{
	return 127;
}

unsigned char getPositiveNumber (void)
{
	return 255;
}

signed char getNegativeNumber (void)
{
	return -128;
}

/*Используем для символов
char					//-128 .. 127 одно и тоже
------------------------------------------------------------
Используем для чисел
signed char				//-128 .. 127 - одно и тоже
unsigned char			//0 .. 255 - не можем использовать минус(-) -128+127 = 255
-------------------------------------------------------------------------------------
*/
void main (void)
{
	printf("Number: %d\r\n", getNumber());
	printf("PositiveNumber: %d\r\n", getPositiveNumber());
	printf("NegativeNumber: %d\r\n", getNegativeNumber());
	return;
	

	}