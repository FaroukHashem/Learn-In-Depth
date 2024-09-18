/*
 * EX_3.c
 *
 *  Created on: Aug 17, 2024
 *      Author: farouk
 */

//	EX3: C Program to Find Transpose of a Matrix

#include <stdio.h>

int main()
{
	const int NUM_OF_ROWS=10;
	const int NUM_OF_COLUMNS=10;
	int matrix[NUM_OF_ROWS][NUM_OF_COLUMNS];
	int i,j,r,c;
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("Enter elements of matrix:\r\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	printf("Entered Matrix:");
	for(i=0;i<r;i++)
	{
		printf("\r\n");
			for(j=0;j<c;j++)
				printf("%d\t",matrix[i][j]);
	}
	printf("\r\nTranspose of Matrix:");
	for(i=0;i<c;i++)
	{
		printf("\r\n");
			for(j=0;j<r;j++)
				printf("%d\t",matrix[j][i]);
	}
	return 0;
}
