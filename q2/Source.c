//Assignment 2 – prog71985 – fall 2020

//feedback received : 
// 1. Avoid magic numbers 

//Thi Huong Tra Le
//Question 2
 
#include <stdio.h>
#include "Tables.h"

int main(void)
{
	int lowerLimit, upperLimit;

	printf("Please enter the lower limit number (enter q to quit): ");
	while (scanf_s("%d", &lowerLimit) == 1 && lowerLimit >= 0)				//continue if the first user's input is an integer, otherwise break the loop
	{
		printf("Please enter the upper limit number (enter q to quit): ");	//continue if the second user's input is an integer, otherwise break the loop
		if (scanf_s("%d", &upperLimit) == 1 && upperLimit >= 0)

		{
			printTable(lowerLimit, upperLimit);								//move the function to printtable.c file
		}
		else
			break;

		printf("Please enter the lower limit number (enter q to quit): ");  
		continue;
	}

	printf("Bye :)\n");

	return 0;
}