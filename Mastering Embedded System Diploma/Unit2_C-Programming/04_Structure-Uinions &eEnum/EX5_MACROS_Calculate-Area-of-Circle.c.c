/*
 * Ex_5.c
 *
 *  Created on: Sep 3, 2024
 *      Author: farouk
 */

#include <stdio.h>

#define PI (3.14)
#define SOL 2

#if (SOL==1)
#define AREA(R) PI*R*(float)R
#elif (SOL==2)
#define FUNCTION(R,name) float name(float R){return PI*R*R;}
FUNCTION(R,AREA)
#endif
int main()
{
	float R;
	printf("Enter the radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&R);
	printf("Area= %.2f",AREA(R));
}
