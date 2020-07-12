




// Author Name: Hamad Nasir

 //Project Description: Obtains miles per liter for each tankful


#include <stdio.h>

int main()
{
	float litres, Ml, totalmiles, totallitres, average;
	int miles;

	totallitres = 0;
	totalmiles = 0;

	printf("Enter the liters used (-1 to end):");
	scanf_s("%f", &litres);
	if (litres != -1){


		printf("Enter the miles driven:");
		scanf_s("%d", &miles);

		Ml = miles / litres;

		printf("The miles/liter for this tank was %f\n", Ml);


		while (litres != -1){
			totallitres = totallitres + litres;
			totalmiles = totalmiles + miles;



			printf("Enter the liters used (-1 to end):");
			scanf_s("%f", &litres);
			if (litres != -1){
				printf("Enter the miles driven:");
				scanf_s("%d", &miles);
				Ml = miles / litres;
				printf("The miles/liter for this tank was %f\n", Ml);
			}
		}


		{
			average = totalmiles / totallitres;
			printf("The overall average miles/liter was %f\n", average);
		}
	}
	else
		printf("nothing were entered");

	return 0;



}