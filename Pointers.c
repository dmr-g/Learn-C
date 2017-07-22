#include <stdio.h>

#define EOL '\n'

void main (void)
{
	char one = 1;
	char two = 2;
	char three = 3;

	char* onePointer = NULL;
	char* twoPointer = NULL;
	char* threePointer = NULL;

	onePointer = &one;
	twoPointer = &two;
	threePointer = &three;

	printf("%cOne Variable: %d%c",EOL ,one, EOL);
	printf("Two Variable: %d", two);
	printf("%cThree Variable: %d%c", EOL, three, EOL);

	printf("%cOne adress: %x%d", EOL, &one);
	printf("%cTwo adress: %x%d", EOL, &two);
	printf("%cThree adress: %x%d", EOL, &three);

	printf("%c%cOne Value: %d%c",EOL, EOL, *onePointer, EOL);
	printf("Two Value: %d%c", *twoPointer, EOL);
	printf("Three Value: %d%c",*threePointer, EOL);
	
	*onePointer = 10;
	*twoPointer = 20;
	*threePointer = 30;

	printf("%c%cOne Value: %d%c",EOL, EOL, *onePointer, EOL);
	printf("Two Value: %d%c", *twoPointer, EOL);
	printf("Three Value: %d%c",*threePointer, EOL);

	printf("%cOne Variable: %d%c",EOL ,one, EOL);
	printf("Two Variable: %d", two);
	printf("%cThree Variable: %d%c", EOL, three, EOL);

	return;
	}