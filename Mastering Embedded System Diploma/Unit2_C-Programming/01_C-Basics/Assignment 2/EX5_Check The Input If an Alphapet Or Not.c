/*
 * EX05.c
 *
 *  Created on: Aug 12, 2024
 *      Author: farou
 */
#include <stdio.h>

int main()
{
	char alphabet;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&alphabet);
	if(((int)alphabet>=65&&(int)alphabet<=90)||((int)alphabet>=97&&(int)alphabet<=122))
		printf("%c is an alphabet",alphabet);
	else
		printf("%c is not an alphabet",alphabet);
	return 0;

}
