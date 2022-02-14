/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main (void)
{
	int maths, science, total;
	float avg;
	
	printf("Enter marks of Maths:");
	scanf("%d", &maths);
	
	printf("Enter marks of Science:");
	scanf("%d", &science);
	
	total=maths+science;
	avg=total/2.0;
	printf("Average is:%.2f", avg);
	
	return 0;
}

