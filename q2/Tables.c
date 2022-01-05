#include "Tables.h"

void printTable(int min, int max)
{
	if (min < max)									//check if the lowerLimit is smaller than the upperLimit, if not then let user input again 
	{
		for (int row = min; row <= max; row++)		//the number of rows is the range between lower and upper limit
		{

			printf("|->|%d|--|", row);				//print the interger
			printf("%d|--|", row * row);			//print the square
			printf("%d|<-|", row * row * row);		//print the cube
			printf("\n");
		}
	}
	else
	{
		printf("Upper limit needs to be larger than the lower limt!\n");
	}
}