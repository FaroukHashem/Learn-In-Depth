/*
 * Strings_EX_1.c
 *
 *  Created on: Aug 17, 2024
 *      Author: farouk
 */

//	EX1:C Program to Find the Frequency of Characters in a String

#include <stdio.h>

int main()
{
	char c,string[100];
	int i,freq;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(string);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	for(i=0,freq=0;string[i]!=0;i++)
		if(string[i]==c)
			freq++;
	printf("Frequency of %c = %d",c,freq);
	return 0;
}
