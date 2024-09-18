/******************************************************************************
 *
 * File Name: Assignment_1.c
 *
 * Description: C Basics Exercises
 *
 * Author: Farouk Hashem
 *
 *******************************************************************************/

 #include <stdio.h>

int main(){

	printf("Ex1_Solution:\r\n");
	printf("C Programming");

	printf("\r\nEx2_Solution:\r\n");
	int Entry;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Entry);
	printf("You entered: %d",Entry);

	printf("\r\nEx3_Solution:\r\n");
	int i1,i2;
	printf("Enter two integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&i1,&i2);
	printf("Sum: %d",(i1+i2));

	printf("\r\nEx4_Solution:\r\n");
	float f1,f2;
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&f1,&f2);
	printf("Product: %f",(f1+f2));

	printf("\r\nEx5_Solution:\r\n");
	char c;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,(int)c);

	printf("\r\nEx6_Solution:\r\n");
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp=b;
	b=a;
	a=temp;
	printf("After swapping, value of a = %f\r\n",a);
	printf("After swapping, value of b = %f",b);

	printf("\r\nEx6_Solution:\r\n");
	float x,y;
	printf("Enter value of x: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of y: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y);
	x=y+x;
	y=x-y;
	x=x-y;
	printf("After swapping, value of x = %f\r\n",x);
	printf("After swapping, value of y = %f",y);

return 0;

}
