/*
 * EX_2.c
 *
 *  Created on: Aug 17, 2024
 *      Author: farouk
 */

//	EX2: C Program to Calculate Average USing Arrays

#include <stdio.h>

int main()
{
	const int NUM_OF_ELEMENTS =10;
	float Sum,data[NUM_OF_ELEMENTS];
	int i,n;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(Sum=0,i=0;i<n;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&data[i]);
		Sum+=data[i];
	}
	printf("Average = %.2f",Sum/n);
	return 0;
}

