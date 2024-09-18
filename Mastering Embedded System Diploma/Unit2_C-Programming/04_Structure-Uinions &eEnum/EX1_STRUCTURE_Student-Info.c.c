/*
 * Ex_1.c
 *
 *  Created on: Sep 2, 2024
 *      Author: farouk
 */
#include <stdio.h>
#include <string.h>

struct SStudentInfo {
	char m_Name[20];
	int m_RollNumber;
	float m_Mark;
};

struct SStudentInfo ReadStudent(void)
{
	struct SStudentInfo S;
	printf("Enter information of student:\n");
	printf("\nEnter name: ");
		fflush(stdin);fflush(stdout);
		gets(S.m_Name);
	printf("Enter roll number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&S.m_RollNumber);
	printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&S.m_Mark);
	return S;
}
void DisplayInfo(struct SStudentInfo S)
{
	printf("\nDisplaying Information\n");
	printf("name: %s\nRoll: %d\nMarks: %.1f",S.m_Name,S.m_RollNumber,S.m_Mark);
}


int main()
{
	struct SStudentInfo Student;
	Student=ReadStudent();
	DisplayInfo(Student);
	return 0;
}

