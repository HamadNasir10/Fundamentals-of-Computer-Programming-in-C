/*
//Hamad Nasir
//reg: No:	120312
//Lab#10 Task#1


*/

#include<stdio.h>

float Convert_to_fah(float);
float Convert_to_cel(float);


void main(){
	float counter = 0;
	printf("\nConversion of celcius into Fehrenheit\n\n");
	printf("\tCelcius value\t\tFahrenheit\t\t\tCelcius value\t\tFahrenheit");

	for (counter; counter <= 50; counter++){

		printf("\n\t%.0f\t\t\t%.1f", counter, Convert_to_fah(counter));
		if (counter == 50)
			break;
		printf("\t\t\t\t%.0f\t\t\t%.1f", counter + 51, Convert_to_fah(counter + 51));
	}

	printf("\n\nConversion of Fehrenheit into celcius");
	printf("\n\n\tFahrenheit\t\tCelcius\t\t\tFahrenheit\t\tcelcius");

	counter = 32;
	for (counter; counter <= 122; counter++){

		printf("\n\t%.0f\t\t\t%.1f", counter, Convert_to_cel(counter));
		if (counter == 122)
			break;
		printf("\t\t\t\t%.0f\t\t\t%.1f", counter + 91, Convert_to_cel(counter + 91));
	}


	getchar();
	getchar();
}

float Convert_to_fah(float celcius){
	float fahrenheit;

	fahrenheit = (1.8*celcius) + 32;

	return fahrenheit;
}

float Convert_to_cel(float fahrenheit){
	float celcius;

	celcius = 0.56*(fahrenheit - 32);

	return celcius;
}
