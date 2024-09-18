/*
 * EX06.c
 *
 *  Created on: Aug 12, 2024
 *      Author: farou
 */
#include <stdio.h>

int main()
{
	int n,i,Sum;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1,Sum=0;i<=n;i++)
		Sum+=i;
	printf("Sum = %d",Sum);
	return 0;
}
