/*
 * Ex_3.c
 *
 *  Created on: Sep 6, 2024
 *      Author: farouk
 */
#include <stdio.h>
#include <string.h>

int main()
{
	char Word[50],*cptr;
	printf("Input a string : ");
	fflush(stdin);fflush(stdout);
	gets(Word);
	cptr=Word;
	while(*cptr!=0)
		cptr++;
	cptr--;
	printf("Reverse of the string is : ");
	for(;cptr>=Word;cptr--)
		printf("%c",*cptr);
	return 0;
}
