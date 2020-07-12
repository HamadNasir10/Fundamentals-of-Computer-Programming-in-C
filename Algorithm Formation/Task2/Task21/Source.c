
//Author Name: Hamad Nasir

// Project Description: Works out Gross Pay of Employees


#include <stdio.h>

int main()
{
	float rate, salary, hours, extra;

	rate = 0;
	hours = 0;

	printf("Enter hours worked (-1 to end):");
	scanf_s("%f", &hours);

	while (hours != -1){
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);
		if (hours <= 40){


			salary = rate * hours;
			printf("Salary is %f\n", salary);

		}
		else{

			extra = hours - 40;
			salary = (40 * rate) + (extra * rate * 1.5);
			printf("Salary is %.2f\n", salary);
		}


		printf("Enter hours worked (-1 to end):");
		scanf_s("%f", &hours);
	}
	return 0;
}