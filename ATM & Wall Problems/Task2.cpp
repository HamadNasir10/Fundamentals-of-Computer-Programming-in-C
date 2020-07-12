//Name=Hamad Nasir
//Section=BSCS-6C
//Registeration Number=00000120312



#include<stdio.h>


int main()
{
	int amount=0,notes;

	while (amount!=-999){
		printf("Enter an amount: ");
		scanf_s("%d", &amount);

		if (amount % 500 != 0){
			printf("You must enter multiples of 500 only!\n");
		}
		
			if (amount % 500 == 0){
				notes = amount / 500;
				printf("%d x 500 notes dispensed \n", notes);
			}


		}
	
	if (amount == -999)
		printf("Thank you for using HBL!\n");
  
	getchar();
	return 0;

}





