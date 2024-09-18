/*
 ===================================================================================================
 Name        : C-Functions_Ex_4.c
 Author      : Farouk Hashem
 Description : Calculate a power of a number using Recursion.
 ===================================================================================================
 */

#include <stdio.h>

int PowerOf(int n,int p)
{
	if(p==0)
		return 1;
	else
		return n*PowerOf(n,--p);

}

int main()
{
	int n,p;
	printf("Enter a base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("Enter a power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
	printf("%d^%d= %d",n,p,PowerOf(n,p));
	return 0;
}
