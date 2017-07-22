#include <stdio.h>
#include <stdbool.h> //Позволяет нам использовать булевы выражения тип(bool) может содержать 2 значение  1 - true or 0 - false

#define SIZE 4 //Препроцессорная директива define
	/*while(условие цикла)
	{
		тело цикла
	}*/

int main (void)
{
	int prices[SIZE] = { 100, 200, 300, 400 }; // Лучше использовать константу для прохода по массиву
	bool isTrue = true;
	bool isFalse = false;
	printf("True: %d, False: %d", isTrue, isFalse);

	printf("\r\n\r\nWhile loop: \r\n");
	int i = 0; //Индексатор для цикла
	while(i < SIZE) //Выполнять пока i(0) < Size(4)
	{
		printf("%d\r\n",prices[i] );
		i = i + 1;						//После выполнения повысить значени i на 1 (можно написать i++;)
	}

	printf("\r\nFor loop: \r\n");

	for (int i = 0; i < SIZE; i++) //В отличии от while в for можно задекларировать и проинициализировать переменную прямо в теле условия цикла for.Также этого всего нельзя в стандарте ANSI C в отличии от c99. Чтобs зациклить for нужно использовать ;;
	{
		printf("%d\r\n", prices[i]);
	}

	return 0;
	}
/*Итерация в программировании — организация обработки данных, при которой действия повторяются многократно, не приводя при этом к вызовам самих себя (в отличие от рекурсии)[1].
Когда какое-то действие необходимо повторить большое количество раз, в программировании используются циклы. Например, нужно вывести 200 раз на экран текст «Hello, World!». Вместо двухсоткратного повторения одной и той же команды вывода текста часто создается цикл, который повторяется 200 раз и 200 раз выполняет то, что написано в теле цикла. Один шаг цикла и называется итерацией.*/
