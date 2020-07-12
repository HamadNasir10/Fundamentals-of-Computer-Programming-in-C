//Name=Hamad Nasir
//Section=BSCS-6C
//Reg No.=120312
//Lab 13 Task 1

#include <stdio.h>
#define SIZE 20
void checkduplicate(int b[], int index); // function prototype

int main(void) {

	int i;
	int numArray[SIZE] = { 0 }; // assign eah element of array to 0

	printf("Enter %d numbers: ", SIZE);   

		for (i = 0; i < SIZE; i++)
		{
			scanf_s("%d", &numArray[i]); // user input elements of array
		}

		printf("The input numbers are: \n");  // print inputted array
		
		for (i = 0; i < SIZE; i++)
		{
			printf("%d ", numArray[i]);
		}

		printf("\n");
		printf("The nonduplicate numbers are: \n");
		printf("%d ", numArray[0]);

		for (i = 1; i < SIZE; i++)  //find and print nunduplicate array
		{
			checkduplicate(numArray, i);  // function call
		}
	
	getch();
	return 0;
}

void checkduplicate(int b[], int index) //funtion developed
{
	int i, j;

	for (i = 0; i < index; i++)
	{
		if (b[index] == b[i])
			return;					
		
	}//end for
	printf("%d ", b[index]);

}