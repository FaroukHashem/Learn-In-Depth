/*
 * EX_4.c
 *
 *  Created on: Aug 17, 2024
 *      Author: farouk
 */

//	EX4:C Program to Insert an element in an Array

#include <stdio.h>

int main()
{
	int i,e,p,n,a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\r\nEnter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);
	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		if(i==p-1)
		{
			printf("%d ",e);
			for(i=p-1;i<n;i++)
				printf("%d ",a[i]);
			break;
		}
		printf("%d ",a[i]);
	}

	return 0;
}
