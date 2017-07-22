#include <stdio.h>

void PrintString(const char * string)
{
	printf("\r\n%s", string);
}

void printArrayString(const char **string)
{
	printf("\r\n%s\r\n", string[0]);
	printf("%s\r\n", string[1]);
	printf("%s\r\n", string[2]);
	
}

const char * allowedFlags[] = { "--print", "--god-mode"};
const char * allowedArgs[] = {"-n", "-p", "-j"};


unsigned int checkAllowedFlags(const char **const flags)
{
	//for //while
	printf("%s\r\n", "Bad argument!");
	
}

int main (int argc, const char * const argv[])
{
	printf("\r\n%d\r\n", argc);

	if (argc > 1)
		checkAllowedFlags(argv);

	printf("%s\r\n", argv[0]);
	printf("%s\r\n", argv[1]);
	printf("%s\r\n", argv[2]);
	

	/*char hello1[] = { 'H', 'e', 'l', 'l', 'o', '1', '\0' };
	char hello2[] = "Hello2";

	const char * hello3 = "Hello3"; //константа - содержимое нельзя поменять
	const char * const hello4 = "Hello4";//нельзя поменять содержимое и адрес

	const char * states[] = { "Moscow", "New-York", "Kiev" }; 

	printf("Hello1: %s\r\n", hello1);
	printf("Hello2: %s\r\n\r\n", hello2);

	printf("Hello 3: %p\r\n", hello3); //Выводим адреса
	printf("Hello 4: %p\r\n", hello4); //Выводим адреса

	hello3 = hello4;

	printf("Hello 3: %p\r\n", hello3); //Выводим адреса
	printf("Hello 4: %p\r\n\r\n", hello4); //Выводим адреса

	printf("Hello3: %s\r\n", hello3); //Выводим значение
	printf("Hello4: %s\r\n", hello4); //Выводим значение
	
	hello1[0] = 'X'; //Замена 1 символа в массиве
	printf("\r\n%s\r\n", hello1);

	PrintString(hello3);
	PrintString(hello4);

	printf("\r\n\r\n%s\r\n", states[0]);
	printf("%s\r\n", states[1]);
	printf("%s\r\n", states[2]);

	printArrayString(states);*/

	return 0;
	}