//Name:Hamad Nasir
//Registration Number:120312
//Section:BSCS-6C

#include <stdio.h>
#define SIZE 99				

void mean(int b[]);
void median(int b[]);
void mode(int b[]);
void bubbleSort(int b[]);
int findFrequentValue(int b[]);
int findFrequentIndex(int b[]);
void printHistogram(int b[]);



int main(void) {


	int response[SIZE] =
	{ 6, 7, 8, 9, 7, 7, 8, 9, 8, 9,
		7, 8, 9, 5, 7, 8, 7, 8, 7, 8,
		6, 7, 8, 9, 7, 7, 8, 7, 8, 7,
		7, 8, 9, 8, 4, 8, 9, 7, 8, 9,
		6, 7, 8, 7, 8, 7, 9, 8, 1, 2,
		7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
		5, 6, 7, 2, 5, 3, 9, 4, 1, 4,
		7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
		7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
		4, 5, 6, 1, 6, 5, 7, 8, 7};

	mean(response);
	median(response);
	mode(response);

	return 0;


}

/*finds mean*/

void mean(int b[]) {

	int sum = 0;
	int i;

	printf("********\n"
		"MEAN\n"
		"********\n\n"
		"The mean is the average value of the data\n"
		"items. The mean is equal to the total of\n"
		"all the data items divided by the number\n"
		"of data items.\n");

	for (i = 0; i<SIZE; i++)
		sum += b[i];

	printf("\n%d given responses SUM: %d MEAN: %.2f\n", SIZE, sum, (double)sum / SIZE);
	printf("\n");
}

/*finds median*/

void median(int b[]) {

	int i;

	printf("********\n"
		"MEDIAN\n"
		"********\n");

	printf("\nUnsorted array\n");

	for (i = 0; i<SIZE; i++)
		printf("%d ", b[i]);

	printf("\n");

	bubbleSort(b);

	printf("Sorted array\n");

	for (i = 0; i<SIZE; i++)
		printf("%d ", b[i]);

	//FOR REQUIREMENT B
	if (SIZE % 2 == 1)
	{
		printf("\n\nMEDIAN is the %d th element: %d", SIZE / 2, b[SIZE / 2]);
	}
	else
	{
		printf("\n\nMEDIAN is the %d and %dth element: %d", SIZE / 2, SIZE / 2 + 1, (b[SIZE / 2] + b[SIZE / 2 + 1]) / 2);
	}

	printf("\n");

}

/*finds mode*/

void mode(int b[]) {

	int frequency[10] = { 0 }, i, j;

	printf("\n********\n"
		"MODE\n"
		"********\n");
	printf("Mode is the most frequent value.\n");

	/* Fill the frequency array with occurrences of indexes*/

	for (i = 0; i<SIZE; i++)
		frequency[b[i]]++;

	/*print frequency array*/

	for (i = 0; i<10; i++)
		printf("frequency[%d]= %2d\n", i, frequency[i]);

	/* print result */

	printHistogram(frequency);

	//REQIREMENT a: Check if a tie exists:

	printf("\n\n");
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (frequency[i] == frequency[j])
			{
				printf("frequency[%d]==frequency[%d] and the value of these are: %d\n", i, j, frequency[i]);
			}
		}

	}


	printf("\n");
	printf("\nMode is %d and appeared %d times\n", findFrequentIndex(frequency), findFrequentValue(frequency));


}

/* Returns the index of most frequent one in frequency array*/

int findFrequentIndex(int b[]) {

	int mostFrequent = b[0], i;
	int rating;

	for (i = 1; i<10; i++) {

		if (b[i]>mostFrequent) {

			mostFrequent = b[i];
			rating = i;				//keep index of mostFrequent one!
		}
	}

	return rating;

}


/* Returns the value of most frequent occurrence in frequency array*/

int findFrequentValue(int b[]) {

	int mostFrequent = b[0], i;

	for (i = 0; i<10; i++) {

		if (b[i + 1]>mostFrequent)
			mostFrequent = b[i + 1];
	}

	return mostFrequent;

}

/*prints the histogram*/

void printHistogram(int b[]) {

	int i, j;

	for (i = 1; i<10; i++) {

		printf("\nfrequency[%d] ", i);

		for (j = 1; j <= b[i]; j++) {
			printf("*");
		}

	}

}

/*Sort function*/

void bubbleSort(int b[]) {    //Passed by reference

	int passes = SIZE - 1;
	int i, j, temp;

	for (i = 1; i <= passes; i++) {

		for (j = 0; j < SIZE - 1; j++) {

			if (b[j] > b[j + 1]) {

				temp = b[j + 1];
				b[j + 1] = b[j];
				b[j] = temp;
			}

		}

	}

	puts("");
}