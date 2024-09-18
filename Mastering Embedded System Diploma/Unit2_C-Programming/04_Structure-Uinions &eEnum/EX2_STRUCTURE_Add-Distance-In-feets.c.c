/*
 * Ex_2.c
 *
 *  Created on: Sep 3, 2024
 *      Author: farouk
 */

#include <stdio.h>

struct SDistance
{
	int m_feet;
	float m_inch;
};

struct SDistance ReadDistance(char name[])
{
	struct SDistance d;
	printf("Enter information of %s Distance\n",name);
	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d.m_feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d.m_inch);
	return d;
}
void AddDistance(struct SDistance A, struct SDistance B)
{
	struct SDistance d;
	d.m_feet=A.m_feet +B.m_feet;
	d.m_inch=A.m_inch +B.m_inch;
	if(d.m_inch>=12)
	{
		d.m_inch-=12;
		d.m_feet++;
	}
	printf("\nSum of distances= %d'-%.1f\"",d.m_feet,d.m_inch);
}

int main()
{
	struct SDistance d1,d2;
	d1=ReadDistance("1st");
	printf("\n");
	d2=ReadDistance("2nd");
	AddDistance(d1,d2);
	return 0;
}
