/*
//Hamad Nasir
//reg: No:	120312
//Lab#10   Task#2


*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int searching(int, int);		//Giving the prototype of function
void main(){


	int no_random, no_guess;
	char Ending_cond = 'y';
	srand(time(NULL));				//random number generator to the current time.


	do{

		no_random = 1 + (rand() % 1000);				//Random number between 1 to 1000.

		printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.   ");
		scanf_s("%d", &no_guess);

		while (!searching(no_guess, no_random))
			scanf_s("%d", &no_guess);

		printf(" Excellent! You guessed the number!\n");
		printf(" Would you like to play again(y or n)?     ");
		fflush(stdin);
		scanf_s("%c", &Ending_cond);
		break;

	} while (Ending_cond == 'y');

}

int searching(int input1, int input2){			//setting the definition of function.

	if (input1 == input2)
		return 5;
	if (input1<input2)
		printf(" Too low. Try again.  ");
	else
		printf(" Too high. Try again.  ");

	return 0;
}