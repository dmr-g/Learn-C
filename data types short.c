#include <stdio.h>

void main (void)
{
	unsigned short firstValue = 30000;
	unsigned short secondValue = 20000;
	signed short thirdValue = -30000;

	printf("\r\n");
	printf("%15s  %i \r\n", "FirstValue:", firstValue );
	printf("%15s  %i \r\n", "SecondValue:", secondValue );
	printf("%15s %i \r\n", "ThirdValue:", thirdValue );

	return;
}