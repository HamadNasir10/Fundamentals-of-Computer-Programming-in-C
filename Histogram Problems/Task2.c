//Name=Hamad Nasir
//Reg. No=120312
//Section=BSCS-6C

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 7

int main(void){
	size_t side;
	unsigned int roll;
	unsigned int frequency[size] = { 0 };
	srand(time(NULL)); //random number generator

	for (roll = 1; roll <= 6000000; roll++){  //roll die 6000000 times
		side = 1 + rand() % 6;
		++frequency[side];
	}
	printf("%s%15s\n", "side", "Frequency");
	for (side = 1; side < size; ++side){
		printf("%4d%15d\n", side, frequency[side]);
	}  //end for
}    //end main










