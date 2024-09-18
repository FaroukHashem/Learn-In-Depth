/*
 * EX_1.c
 *
 *  Created on: Aug 17, 2024
 *      Author: farouk
 */

//	EX1: Example of Multidimensional Array In C

#include <stdio.h>

int main()
{
	float a[2][2],b[2][2];
	int r,c;
	printf("Enter the elements of 1st matrix\r\n");
	for(r=0;r<2;r++)
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	printf("Enter the elements of 2nd matrix\r\n");
		for(r=0;r<2;r++)
			for(c=0;c<2;c++)
			{
				printf("Enter b%d%d: ",r+1,c+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&b[r][c]);
			}
		printf("Sum of Matrix:");
			for(r=0;r<2;r++)
			{
				printf("\r\n");
				for(c=0;c<2;c++)
					printf("%.1f\t",(a[r][c]+b[r][c]));
			}

	return 0;
}
