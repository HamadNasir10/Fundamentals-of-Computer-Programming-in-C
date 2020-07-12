//Name=Hamad Nasir
//Section=BSCS-6C
//Registeration Number=00000120312



#include<stdio.h>
#include<math.h>

int main()
{
	int width, length, area, numofgallons,price,cost;

	printf("Enter the width in feet ");
	scanf_s("%d", &width);

	printf("Enter the length in feet ");
	scanf_s("%d", &length);

	printf("Enter the price of one gallon of paint ");
	scanf_s("%d", &price);

	area = length*width;
	printf("The area of the wall is %d square feet \n", area);

	
	numofgallons = area / 300;
	cost = numofgallons*price;

	printf("%d gallons are required at the cost of %d\n", numofgallons,cost);


	getchar();
	return 0;

}