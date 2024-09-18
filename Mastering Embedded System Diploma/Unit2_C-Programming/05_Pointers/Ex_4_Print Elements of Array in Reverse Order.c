/*
 * Ex_4.c
 *
 *  Created on: Sep 6, 2024
 *      Author: farouk
 */


#include <stdio.h>

int main()
{
	int num,i;
	int arr[15],*iptr;
	iptr=arr;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("Input %d number of elements in the array :\n",num);
	for(i=0;i<num;i++,iptr++)
		{
			printf("element - %d : ",i+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",iptr);
		}
	iptr--;
	printf("\nThe elements of array in reverse order are :\n");
	for(i=num-1;i>=0;i--,iptr--)
			printf("element - %d : %d\n",i+1,*iptr);

	return 0;
}
