//Assignment 2 – prog71985 – fall 2020

//feedback received : 
// 1. Avoid magic numbers 

//Thi Huong Tra Le
//Question 1
 
#include <stdio.h>

#include "Functions.h"
#include <stdio.h>

int main(void)
{
	int input;													 

	printf("Please enter a number (enter q to quit): ");
	while (scanf_s("%d", &input) == 1 && input >= 0)			//Check if user enter an integer,if not break out of the loop
	{
			printNumbersBetween(input);							//Move function to Functions.c file

		printf("Please enter a number (enter q to quit): ");
		continue;	
	}
	printf("Bye :)\n");

	return 0;
}