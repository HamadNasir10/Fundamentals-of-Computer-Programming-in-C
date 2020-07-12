//Name=Hamad Nasir
//Registeration Number=0000120312
//Course=BSCS-6C


#include<stdio.h>
#include<math.h>


int main()
{
	float p, r, a;
	int n;
//p=original amount invested
//r=amount interest rate
//n=amount of years
//a=amount deposit at the end of nth year

	p = 1000;
	r = 0.05;
	n = 1;

	printf(" Year \t Amount on deposit \n");
	for (n = 1; n <= 10; n = n + 1){
		a = p*pow(1 + r, n);

		printf(" %d \t %.2f\n", n, a);

	}

	getchar;
	return 0;

	}








