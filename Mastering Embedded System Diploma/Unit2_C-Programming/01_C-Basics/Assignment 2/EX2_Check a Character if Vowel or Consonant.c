/*
 * EX02.c
 *
 *  Created on: Aug 12, 2024
 *      Author: farou
 */

#include <stdio.h>

int main(){
	char alphabet;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&alphabet);
	switch(alphabet)
	{
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
	case'A':
	case'E':
	case'I':
	case'O':
	case'U':
		printf("%c is a vowel",alphabet);
		break;
	default :
		printf("%c is a consonant",alphabet);
		break;
	}
	return 0;
}
