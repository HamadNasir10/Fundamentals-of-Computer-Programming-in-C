//Hamad Nasir
//BSCS-6C
//It is a simple programme which decides given number is input or output.

#include<stdio.h>

int main()
{
	int number;

	printf("Enter an integer:\n ");
	scanf_s(" %d", &number);

	if (number%2 == 0)
		printf("Even Number \n");
	else
		printf("Odd Number\n ");

	getchar();

	return 0;






}