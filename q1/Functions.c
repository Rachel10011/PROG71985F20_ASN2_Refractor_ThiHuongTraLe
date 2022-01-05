#include "Functions.h"
#include <stdio.h>

void printNumbersBetween(int input)
{
	printf("%d\n", input);
	int inputAddsTen = input + TEN;

	while (++input <= inputAddsTen)			//increse the number by one then print it until it reaches the requirement
	{
		printf("%d\n", input);
	}
}



