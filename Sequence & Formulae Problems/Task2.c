//Name=Hamad Nasir
//Section=BSCS-6C
//Registeration Number=120312

#include<stdio.h>

int main()
{
	int number, counter,sum=0,newnumber;    //intialize variables

	printf("How many integers you want to enter: ");        //ask how many numbers he wants in his sequence
	scanf_s("%d", &number);
	
	printf("Enter the sequence you want to find sum of: \n");     //Now enter sequence

	for (counter = 1; counter <= number; counter++){

		scanf_s("%d", &newnumber);      //user will input integers in his sequence

		sum = sum + newnumber;    //will sum the input sequence

	}

	printf("Sum of the sequence is %d\n", sum);      //print the sum of the sequence

	getchar();
	return 0;

}