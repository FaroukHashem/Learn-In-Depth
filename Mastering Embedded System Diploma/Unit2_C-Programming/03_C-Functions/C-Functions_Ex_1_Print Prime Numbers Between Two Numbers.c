/*
 ===================================================================================================
 Name        : C-Functions_Ex_1.c
 Author      : Farouk Hashem
 Description : Prime Numbers between intervals by making user-defined function.
 ===================================================================================================
 */
#include <stdio.h>

void PrimeNumbers(int n1 ,int n2);

int main()
{
	int n1,n2;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&n1,&n2);
	PrimeNumbers(n1,n2);
	return 0;
}

void PrimeNumbers(int n1 ,int n2)
{
	int i,j;
	printf("Prime Numbers between %d and %d are: ",n1,n2);
	for(i=n1+1;i<n2;i++)
	{
		if(i/2==1)
			printf("%d ",i);
		else
			for(j=i/2;j>1;j--)
				if(i%j==0)
					break;
				else if(j==2)
					printf("%d ",i);
	}
}
