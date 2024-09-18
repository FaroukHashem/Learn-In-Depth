/*
 * Strings_EX_2.c
 *
 *  Created on: Aug 17, 2024
 *      Author: farouk
 */

//	EX2:C Program to Find the Length of a String

#include <stdio.h>

int main()
{
	char string[100];
	int length=0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(string);
	while(string[length]!=0)
		length++;
	printf("Length of string: %d",length);
	return 0;
}
