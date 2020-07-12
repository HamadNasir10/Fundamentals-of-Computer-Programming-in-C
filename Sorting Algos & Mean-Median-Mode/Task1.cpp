//Name:Hamad Nasir
//Registration Number:120312
//Section: BSCS-6C
//Lab 14 Task1

#include<stdio.h>
#define size 10

int main()
{
	int a[size] = { 2, 4, 6, 8, 10, 12, 37, 45, 68, 89 };      //initializing array
	int pass;                  //passes counter
	size_t i, j;               //comparisons counter
	int hold;                  //temporary location used to swap array elements     
	int k = 1;

	puts("Data items in original order");

	for (i = 0; i < size; ++i){               //Output original array
		printf("%4d", a[i]);
	}
	for (pass = 1; pass < size; ++pass) {
		for (i = 0, j = 1; i < size - j; ++i || ++j)       //nested for loop
		{
			if (a[i]>a[i + 1])        //if statement for aranging array in ascending order
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				++k;
			}

		}if (k == 1)                       //break case for array that is already in ascending order
			break;
	}

	puts("\nData items in ascending order");

	for (i = 0; i < size; ++i)                  //for loop for arranged array
	{
		printf("%4d", a[i]);
	}
	puts("");
}