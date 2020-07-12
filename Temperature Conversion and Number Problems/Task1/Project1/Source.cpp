//Hamad Nasir

//BSCS-6C

//This projects takes an input temperature value and asks the user to make a choice to convert it to either celcius or fahrenheit.

#include<stdio.h>
#include<stdlib.h>

int main()
{

	int value, Celcius, Fahrenheit;
	char choice;

	printf("Please enter a temperature value: \n");
	scanf_s(" %d", &value);

	printf("Please enter your choice c/f : \n");
	fflush(stdin);
	scanf_s("%c", &choice);

	if (choice == 'c'){

		Celcius = 5 * (value - 32) / 9;
		printf("The temperature in Celcius is: %.2d \n", Celcius);
	}

	if (choice == 'f'){

		Fahrenheit = (1.8 * value) + 32;
		printf("The temperature in Fahrenheit is: %.2d \n", Fahrenheit);
	}


	system("pause");

	return 0;




}