/*
 * Ex_3.c
 *
 *  Created on: Sep 3, 2024
 *      Author: farouk
 */
#include <stdio.h>

struct SComplex
{
	double m_R;
	double m_I;
};

struct SComplex ReadComplex(char name[])
{
	struct SComplex c;
	printf("For %s complex number\n",name);
	printf("Enter real and imaginary respectively: ");
		fflush(stdin);fflush(stdout);
		scanf("%lf %lf",&c.m_R,&c.m_I);
	return c;
}
struct SComplex AddComplex(struct SComplex A, struct SComplex B)
{
	struct SComplex c;
	c.m_R=A.m_R+B.m_R;
	c.m_I=A.m_I+B.m_I;
	return c;
}
void PrintComplex(struct SComplex c)
{
	printf("Sum=%.1lf+%.1lfi\n",c.m_R,c.m_I);
}

int main()
{
	struct SComplex C1,C2,Result;
	C1=ReadComplex("1st");
	C2=ReadComplex("2nd");
	Result=AddComplex(C1,C2);
	PrintComplex(Result);
}


