/*
 * EX07.c
 *
 *  Created on: Aug 12, 2024
 *      Author: farou
 */
#include <stdio.h>

int main()
{
	int n,i,Factorial;;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n==0)
		printf("Factorial = %d",1);
	else if(n<0)
		printf("Error!! Factorial of negative number doesn't exist.");
	else
	{
	for(i=1,Factorial=1;i<=n;i++)
		Factorial*=i;
	printf("Factorial = %d",Factorial);
	}

	return 0;
}

