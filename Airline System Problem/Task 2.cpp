//Name=Hamad Nasir
//Section=BSCS-6C
//Reg No.=120312
//Lab 13 Task 2


#include <stdio.h>

int main()
{
	char answer = 0;
	int a, start, end, economy_class = 0, first_class = -1, found = 0;
	int seats[10] = { 0 };

	while(1)
	{
		do       //nested loops 
		{
			printf("Please type 1 for 'first class'\n");
			printf("Please type 2 for 'economy class'\n");
			printf("Please type anything else to quit: ");
			
			rewind(stdin);

		} while (scanf_s("%c", &answer)!=1);

		if (answer == '1' || answer == '2')  // checks person chose economy class or first class
		{
			if (answer == '1')
			{
				first_class = 0;
				start = 0;
				end = 5;
			}
			else
			{
				first_class = 1;
				start = 5;
				end = 10;
			}

			for (a = start; a < end; a++)
			{
				if (seats[a] == 0)
				{
					economy_class = a;
					seats[a] = 1;
					break;
				}
				 
				if (a == end - 1)   //check if seats in current class are taken
				{
					for (a = 0; a < 10; a++)
					{
						if (seats[a] == 0)
						{							
							found = 1;  // still a seat free 
							break;
						}
					}

					if (!found)
					{
						printf("Sorry flight is full.\nNext flight leaves in 3 hours.\n\n");
						return 0;
					}
					found = 0;

					if (first_class == 0)
					{
						printf("\nThere is no seat left in first class.\n");
						printf("Would you like to get a seat in the economy class?\n");
					}
					else
					{
						printf("\nThere is no seat left in the economy class.\n");
						printf("Would you like to get a seat in first class?\n");
					}
					printf("Please type 'y' for yes, anything else for no: ");
					rewind(stdin);
					scanf_s("%c", &answer);

					if (answer != 'y')
					{
						printf("Next flight leaves in 3 hours.\n\n");
						return 0;
					}
					
					if (first_class == 1)  // switch to first class 
					{
						first_class = 0;
						start = 0;
						end = 5;
						a = start - 1;    // continue doesn't change for loop 
					}
					
					else      // switch to economy class 
					{
						first_class = 1;
						start = 5;
						end = 10;
						a = start - 1;     //continue doesn't change for loop 
					}
				}
				continue;
			}
			printf("Your seat number is %d in %s class\n\n", economy_class + 1, first_class ? "economy" : "first");
		}

		else
		{
			printf("Goodbye!\n");  //if person types other then 1 or 2
		}
	}
	return 0;
}