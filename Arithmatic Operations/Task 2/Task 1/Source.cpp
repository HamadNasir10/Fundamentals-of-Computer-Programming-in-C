// Hamad Nasir
// BSCS-6C

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int Number1, Number2, Sum, Product, Difference, Qoutient, Remainder;
	int wait;

	printf("Please provide first whole numbers:\n");
	scanf_s(" %d", &Number1);

	printf("Please provide second whole number:\n");
	scanf_s(" %d", &Number2);

	Sum = Number1 + Number2;
	printf(" Sum: %d \n", Sum);

	Product = Number1*Number2;
	printf(" Product: %d \n", Product);

	Difference = Number1 - Number2;
	printf(" Difference: %d \n", Difference);

	Qoutient = Number1 / Number2;
	printf(" Qoutient: %.d \n", Qoutient);

	Remainder = Number1 % Number2;
	printf(" Remainder: %d \n", Remainder);

	getchar();

	system("pause");

	return 0;

}







