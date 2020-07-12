
// Hamad Nasir
//BSCS-6C
//This projects is a program that finds sum,product,average of three integers and shows which is the smallest and greatest.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int integer1, integer2, integer3, Sum, Product, Average;
	
	printf("Enter three different integers:\n");
	scanf_s(" %d \n %d \n %d", &integer1, &integer2, &integer3);

	Sum = integer1 + integer2 + integer3;
	printf("Sum: %d \n", Sum );

	Average = (integer1 + integer2 + integer3) / 3;
	printf("Average: %d \n", Average);

	Product = integer1 * integer2 * integer3;
	printf("Product: %d \n", Product);

	if (integer1 >= integer2 && integer1 >= integer3)
		printf(" %.2d is the largest number.\n", integer1);

	if (integer2 >= integer1 && integer2 >= integer3)
		printf(" %.2d is the largest number.\n", integer2);

	if (integer3 >= integer1 && integer3 >= integer2)
		printf(" %.2d is the largest number.\n", integer3);

	
	if (integer1 <= integer2 && integer1 <= integer3)
		printf(" %.2d is the smallest number.\n", integer1);

	if (integer2 <= integer1 && integer2 <= integer3)
		printf(" %.2d is the smallest number.\n", integer2);

	if (integer3 <= integer1 && integer3 <= integer2)
		printf(" %.2d is the smallest number.", integer3);


	system("pause");

	return 0;



}




