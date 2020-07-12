//Name=Hamad Nasir
//Section=BSCS-6C
//Registeration Number=120312
//Lab 9
//Task 1

#include<stdio.h>

int main()
{
	unsigned int grade;
	unsigned int acount=0;
	unsigned int bcount=0;       //Initailizing variables and declaring them values
	unsigned int ccount=0;
	unsigned int dcount=0;
	unsigned int fcount=0;

    
	printf("Enter the letter grades.\n");                  
	printf("Enter the EOF character to end input.\n");

	while ( ( grade=getchar() )!=EOF ){                  // declaring conditioning in while loop
		if (grade == 'A' || grade == 'a'){
			++acount;
			getchar();
		}
		else if (grade == 'B' || grade == 'b'){
			++bcount;
			getchar();
		}
		else if (grade == 'C' || grade == 'c'){
			++ccount;
			getchar();
		}
		else if (grade == 'D' || grade == 'd'){
			++dcount;
			getchar();
		}
		else if (grade == 'F' || grade == 'f'){
			++fcount;
			getchar();
		}
		else{

			printf("%s", "Incorrect letters grade entered\n");
			printf("Enter a new grade\n");
			getchar();
		}    //while loop ends
	}

		printf(" \nTotals for each letter grades are \n");
		printf("A: %d\n", acount);                                 //total number of each grade
		printf("B: %d\n", acount);
		printf("C: %d\n", acount);
		printf("D: %d\n", acount);
		printf("F: %d\n", acount);

	getchar();
	return 0;

}