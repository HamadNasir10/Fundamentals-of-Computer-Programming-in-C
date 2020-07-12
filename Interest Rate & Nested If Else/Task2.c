//Name=Hamad Nasir
//Section= BSCS-6C
//Registeration Number=120312
//Lab9
//Task2


#include<stdio.h>
#include<math.h>

int main()
{
	int years,amountinvested, anualinterest;
	float amountdeposited;

	printf("Enter -1 to quit\n");

	do{
		
		printf("\nEnter the principal ");
		scanf_s("%d", &amountinvested);

		if (amountinvested != -1){
			printf("\nEnter the interest rate ");
			scanf_s("%d", &anualinterest);


			switch (anualinterest){
			case 1:
			{
					  printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					  for (years = 1; years <= 10; years++){
						  amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						  printf("\n %d \t %.2f", years, amountdeposited);
					  }
					  break; }

			case 2:
			{
					  printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					  for (years = 1; years <= 10; years++){
						  amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						  printf(" \n%d \t %.2f", years, amountdeposited);
					  }
					  break; }

			case 3:
			{
					  printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					  for (years = 1; years <= 10; years++){
						  amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						  printf(" \n%d \t %.2f", years, amountdeposited);
					  }
					  break; }


			case 4:
			{
					  printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					  for (years = 1; years <= 10; years++){
						  amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						  printf(" \n%d \t %.2f", years, amountdeposited);
					  }
					  break; }

			case 5:
			{
					  printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					  for (years = 1; years <= 10; years++){
						  amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						  printf(" \n%d \t %.2f", years, amountdeposited);
					  }
					  break; }


			case 6:
			{
					  printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					  for (years = 1; years <= 10; years++){
						  amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						  printf(" \n%d \t %.2f", years, amountdeposited);
					  }
					  break; }

			case 7:
			{
					  printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					  for (years = 1; years <= 10; years++){
						  amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						  printf(" \n%d \t %.2f", years, amountdeposited);
					  }
					  break; }


			case 8:
			{
					  printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					  for (years = 1; years <= 10; years++){
						  amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						  printf(" \n%d \t %.2f", years, amountdeposited);
					  }
					  break; }



			case 9:
			{
					  printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					  for (years = 1; years <= 10; years++){
						  amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						  printf(" \n%d \t %.2f", years, amountdeposited);
					  }
					  break; }


			case 10:
			{
					   printf("\n Year \t Amount on deposit(with %d%% interest rate)\n", anualinterest);
					   for (years = 1; years <= 10; years++){
						   amountdeposited = (float)amountinvested*pow(1 + anualinterest / 100.00, years);
						   printf(" \n%d \t %.2f", years, amountdeposited);
					   }
					   break; }

			default:
				printf("Interest should be between 1 and 10");
				break;
			}


		}
	} while (amountinvested != -1);
	
	getchar();
	return 0;
	

}
