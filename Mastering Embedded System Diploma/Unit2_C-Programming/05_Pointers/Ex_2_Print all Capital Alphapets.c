/*
 * Ex_2.c
 *
 *  Created on: Sep 6, 2024
 *      Author: farouk
 */
#include <stdio.h>


int main()
{
	char letter ='A';
	char *cptr=&letter;
	for(;*cptr<='Z';(*cptr)++)
		printf("%c ",*cptr);

	return 0;
}
