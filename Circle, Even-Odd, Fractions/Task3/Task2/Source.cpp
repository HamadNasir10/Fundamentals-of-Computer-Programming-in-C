


//Hamad Nasir
//BSCS-6C
//It is a programme which finds sum of given two fractions.


#include<stdio.h>


int main()
{
	int NM1,DM1,NM2,DM2,denominator,numerator;
	

	printf("Enter first fraction: ");
	scanf_s("%d/%d",  &NM1,&DM1);

	printf("Enter second fraction: ");
	scanf_s("%d/%d", &NM2,&DM2);

	numerator =   NM1*DM2 + NM2*DM1;
	denominator = DM1*DM2;
	

	printf("Sum: %d/%d \n ", numerator, denominator);

	getchar();

	return 0;






}