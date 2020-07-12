//Name=Hamad Nasir
//Registeration number=0000120312
//Section=BSCS-6C



#include<stdio.h>

int main()
{
	int counter, sum;

	sum = 0;

	

	for (counter = 2; counter <= 500; ++counter) {

		if (counter % 2 == 0) {

			sum = sum + counter;

			

		}
	}
	printf("\n Sum of all even numbers between 2 to 500 is %d \n ", sum);

	getchar;

	return 0;



}