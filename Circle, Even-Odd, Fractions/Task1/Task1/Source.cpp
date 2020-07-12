//Hamad Nasir
//BSCS-6C
//This is a simple programme which when given radius finds diameter,circumference and area of circle.


#include <iostream>
#include<stdio.h>

int main()
{
	int Radius;
	float pie=3.14159,Diameter,Circumference, Area;

	printf("Enter the radius of circle:");
	
	scanf_s("%d",&Radius);

	
	Diameter = 2 * Radius;
	Circumference = 2 * pie * Radius;
	Area = pie*(Radius * Radius);


	printf(" Diameter= %.2f \t  Circumference=%.2f \t  Area=%.2f \n", Diameter, Circumference, Area);

	system("pause");

	return 0;




}




