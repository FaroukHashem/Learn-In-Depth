/*
 * EX08.c
 *
 *  Created on: Aug 12, 2024
 *      Author: farou
 */
#include <stdio.h>

int main(){
	char operator;
	float n1,n2;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&n1,&n2);
	switch(operator)
	{
	case'+':
	{
		printf("%f + %f = %f",n1,n2,(n1+n2));
	}
	break;
	case'-':
	{
		printf("%f - %f = %f",n1,n2,(n1-n2));
	}
	break;
	case'*':
	{
		printf("%f * %f = %f",n1,n2,(n1*n2));
	}
	break;
	case'/':
	{
		printf("%f / %f = %f",n1,n2,(n1/n2));
	}
	break;
	default :
		printf("Invalid Operator");
		break;
	}
	return 0;
}


