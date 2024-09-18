/*
 * Strings_EX_3.c
 *
 *  Created on: Aug 17, 2024
 *      Author: farouk
 */

//	Ex3:C Program to Reverse String Without Using Library Function
//	only strlen() is allowed

#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int length;
	printf("Enter a string    : ");
	fflush(stdin);fflush(stdout);
	gets(string);
	length=strlen(string);
	printf("Reverse string is : ");
	while(length--!=0)
		printf("%c",string[length]);
	return 0;
}
