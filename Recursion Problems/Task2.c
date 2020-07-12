//Name=Hamad Nasir
//Section=BSCS-6C
//Registeration Number=120312
//Lab=11
//Task2
#include<stdio.h>

int power(int base, int exponent);

int main(void){
	int base, exponent;

	printf("Enter base ");
	scanf_s("%d", &base);

	printf("Enter exponent ");
	scanf_s("%d", &exponent);

	printf("%d raised to power %d =%d \n",base,exponent, power(base, exponent));

	getchar();
	return 0;

} //function build
int power(int base, int exponent){
	//base case
	if (exponent == 1)
		return base;
	//recursive step
	else
	return base*power(base, exponent - 1);
}