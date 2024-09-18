/*
 ===================================================================================================
 Name        : C-Functions_Ex_3.c
 Author      : Farouk Hashem
 Description : Reverse a sentence using Recursion.
 ===================================================================================================
 */
#include <stdio.h>
#include <string.h>

void ReverseSentence(char sentence[],int n)
{
	if(n==0)
		printf("%c", sentence[strlen(sentence)-n-1]);
	else
	{
	ReverseSentence(sentence,n-1);
	printf("%c", sentence[strlen(sentence)-n-1]);
	}

}

int main()
{
	char sentence[15];
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	gets(sentence);
	ReverseSentence(sentence,strlen(sentence));
	return 0;
}
