/*
 * EX_5.c
 *
 *  Created on: Aug 17, 2024
 *      Author: farouk
 */

//	EX5:C Program to search an element in Array

#include <stdio.h>

int main()
{
	int i,e,n,a[10]={11,22,33,44,55,66,77,88,99,110};
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\r\nEnter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);
	for(i=0;i<n;i++)
		if(a[i]==e)
		{
			printf("Number found at the location = %d",i+1);
				break;
		}
		else if(i==n-1)
			printf("Number is not found");
	return 0;
}

