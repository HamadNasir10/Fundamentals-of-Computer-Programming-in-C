//Name=Hamad Nasir
//Roll No=120312
//Section=BSCS-6C


#include<stdio.h>

int main(){

	int n[10] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 }, counter,a;   //inializer list to inialize array

	
	printf(" %s%10s%15s", "Element", "value", "Histogram");    //output contents of array in tabular format

	for (counter = 0; counter < 10; counter++)
	{
		printf("\n%8d%10d\t", counter, n[counter]);

		for (a = 1; a <= n[counter]; a++)
			printf("%c", '*');
	}                                         //end for
	puts(" ");
}                                           //end main