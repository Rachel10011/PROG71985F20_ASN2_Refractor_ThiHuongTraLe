#include "Convert.h"
#include <stdio.h>

void convertDaysToWeeks(int days)
{

			int weeks = WEEK(days);					//there are 7 days a week  
			int extraDays = EXTRADAYS(days);		//Check the remainder (days)
			printf("%d %s %s %d %s and %d %s\n",
				days,
				days > 1 ? "days" : "day",			//grammar check
				days > 1 ? "are" : "is",			//if there is more than one day/week, add 's' for 'day' or 'week'
				weeks,
				weeks > 1 ? "weeks" : "week",
				extraDays,
				extraDays > 1 ? "days" : "day");
}