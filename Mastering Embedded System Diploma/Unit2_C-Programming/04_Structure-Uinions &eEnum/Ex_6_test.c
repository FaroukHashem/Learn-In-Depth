/*
 * test.c
 *
 *  Created on: Sep 3, 2024
 *      Author: farou
 */

#include <stdio.h>

union job
{
	char name[32];
	float salary;
	int worker_no;
}u;

struct job1
{
	char name[32];
	float salary;
	int worker_no;
}s;

int main()
{
	printf("size of union=%d",sizeof(u));
	printf("\nsize of structure=%d",sizeof(s));
	return 0;
}
