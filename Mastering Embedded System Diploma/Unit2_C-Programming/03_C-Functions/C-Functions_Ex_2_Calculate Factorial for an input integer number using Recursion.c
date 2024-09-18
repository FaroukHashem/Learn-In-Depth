/*
 ===================================================================================================
 Name        : C-Functions_Ex_2.c
 Author      : Farouk Hashem
 Description : Calculate Factorial using Recursion.
 ===================================================================================================
 */

#include <stdio.h>

int Factorial(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return n*Factorial(n-1);
}

int main()
{
	int n;
	printf("Enter an positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("Factorial of %d = %d",n,Factorial(n));
	return 0;
}
