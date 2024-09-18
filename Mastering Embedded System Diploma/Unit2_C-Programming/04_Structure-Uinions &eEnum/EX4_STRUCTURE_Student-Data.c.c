/*
 * Ex_4.c
 *
 *  Created on: Sep 3, 2024
 *      Author: farouk
 */
#include <stdio.h>

struct SStudent
{
	char m_Name[10];
	int m_Roll;
	int m_Marks;
};

struct SStudent ReadStudent(int num)
{
	struct SStudent s;
	printf("For roll number %d\n",num+1);
	printf("Enter name: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",s.m_Name);
	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s.m_Marks);
	return s;
}
void DisplayDatabase(struct SStudent s[],int num)
{
	int i;
	printf("\nDisplaying information of students\r\n");
	for(i=0;i<num;i++)
	{
		printf("Information roll number %d\n",i+1);
		printf("Name: %s\n",s[i].m_Name);
		printf("Marks: %d\n",s[i].m_Marks);
	}
}

int main()
{
	int count=0;
	printf("Enter information of students\r\n");
	struct SStudent s[10];
	do{
		s[count]=ReadStudent(count);
		count++;
	}while (count!=10);
	DisplayDatabase(s,count);
	return 0;
}
