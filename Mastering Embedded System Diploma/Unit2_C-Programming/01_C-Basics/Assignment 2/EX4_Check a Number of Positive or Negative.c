#include <stdio.h>

int main()
{
	float Number;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Number);
	if(Number==0)
		printf("You entered Zero");
	else if(Number>0)
		printf("%f is positive",Number);
	else
		printf("%f is negative",Number);
	return 0;
}
