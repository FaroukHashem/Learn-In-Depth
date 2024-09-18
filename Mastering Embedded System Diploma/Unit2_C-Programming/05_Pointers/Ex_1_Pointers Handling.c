/*
 * Ex_1.c
 *
 *  Created on: Sep 6, 2024
 *      Author: farouk
 */
#include <stdio.h>

int main()
{
	int m =29;
	printf("Address of m : 0x%x\n",(unsigned int)(uintptr_t)&m);
	printf("Value of m : %d\r\n",m);

	int* ab=&m;

	printf("Now ab is assigned with address of m.\n");
	printf("Address of pointer ab : 0x%X\n",ab);
	printf("Content of pointer ab : %d\r\n",*ab);

	m=34;

	printf("The value of m is assigned to %d now\n",m);
	printf("Address of pointer ab : 0x%X\n",ab);
	printf("Content of pointer ab : %d\r\n",*ab);

	*ab=7;

	printf("The pointer value ab is assigned with the value %d now\n",*ab);
	printf("Address of m : 0x%X\n",&m);
	printf("Value of m : %d\r\n",m);
	return 0;
}

