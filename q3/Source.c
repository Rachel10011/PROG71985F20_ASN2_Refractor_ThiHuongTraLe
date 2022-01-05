//Assignment 2 – prog71985 – fall 2020

//feedback received : 
// 1. Avoid magic numbers 

//Thi Huong Tra Le
//Question 3

#include <stdio.h>
#include "Convert.h"

int main(void)
{	
	int days;      

	printf("Please enter a number of days: ");\

	while (scanf_s("%d", &days) == 1 && days >0)				//Check if user enter an integer
	{
		convertDaysToWeeks(days);								// Move the function to convert. c file

		printf("Please enter a number of days: ");			
		continue;

	}
	printf("Bye :)\n");  

	return 0;
}