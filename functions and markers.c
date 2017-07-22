#include <stdio.h>

char get1 (void)
{
	return 65;
}

char get2 (void)
{
	return 66;
}

char get3 (void)
	{	
	return 67;
	}

void main (void)
{
	//маркеры
	// - %d (decimal) - десятичные числа
	// - %с (char / character - символьный маркер) - символьные числа
	// - %i (integer) - работает с числами -2,147,483,648 to 2,147,483,647 .. 0 to 4,294,967,295.
	// - %s (string) - строка
	// - %x Позволяет выводить число в шестнадцатиричном виде.
	// - %f Работа с дробными числами
	// "" - строка '' - символ

	// \r\n - Комбинация перевода курсора на новую строку
	// \r\n - windows
	// \n - *unix / Linux / Ubuntu / Unix / Mac OS

	printf("%c\r\n", get1());
	printf("%c\r\n", get2());
	printf("%c", get3());
	return;
	}