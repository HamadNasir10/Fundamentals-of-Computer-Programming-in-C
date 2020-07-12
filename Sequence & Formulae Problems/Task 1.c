//Name=Hamad Nasir
//Section=BSCS-6C
//Registeration Number=120312

#include<stdio.h>
#include<math.h>

int main()
{
	int amount, years;          //intializing variables
	float amountendyear;

	amount = 1000.00;
	

	printf(" Years \t Amount on deposit(with 5%% anual interest)\n");

	for (years = 1; years <= 10; years++){          //for loop as it is counter controlled repetition


		amountendyear = amount*pow(1 + 0.05, years);

		printf(" %d  \t %.2f \n ", years, amountendyear);
	}

	printf(" \nYears \t Amount on deposit(with 6%% anual interest)\n");

	for (years = 1; years <= 10; years++){        //for loop as it is counter controlled repetition


		amountendyear = amount*pow(1 + 0.06, years);

		printf(" %d  \t %.2f \n ", years, amountendyear);
	}

	printf(" \nYears \t Amount on deposit(with 7%% anual interest)\n");

	for (years = 1; years <= 10; years++){        //for loop as it is counter controlled repetition


		amountendyear = amount*pow(1 + 0.07, years);

		printf(" %d  \t %.2f \n ", years, amountendyear);
	}

	printf(" \nYears \t Amount on deposit(with 8%% anual interest)\n");

	for (years = 1; years <= 10; years++){       //for loop as it is counter controlled repetition


		amountendyear = amount*pow(1 + 0.08, years);

		printf(" %d  \t %.2f \n ", years, amountendyear);
	}

	printf(" \nYears \t Amount on deposit(with 9%% anual interest)\n");

	for (years = 1; years <= 10; years++){       //for loop as it is counter controlled repetition


		amountendyear = amount*pow(1 + 0.09, years);

		printf(" %d  \t %.2f \n ", years, amountendyear);
	}

	printf(" \nYears \t Amount on deposit(with 10%% anual interest)\n");

	for (years = 1; years <= 10; years++){       //for loop as it is counter controlled repetition


		amountendyear = amount*pow(1 + 0.1, years);

		printf(" %d  \t %.2f \n ", years, amountendyear);
	}

	getchar();         
	return 0;
}