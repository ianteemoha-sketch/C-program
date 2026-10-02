/*
Name: Ian murithi
Reg N.o CT100/G/30771/26
Description:A C program that prompts the user to enter the number of units consumed
*/


# include <stdio.h>

float calculate_bill(float numberofunits);

int main() {
	
	float numberofunits;
	float bill;
	
	printf("Enter the number of units consumed: \t");
	scanf("%f", &numberofunits);
	
	bill = calculate_bill(numberofunits);
	
	printf("The number of units consumed is : %f\n", numberofunits);
	printf("The total electricity bill is: %f\n", bill);
	
	
	return 0;
}

float calculate_bill(float numberofunits) {
	float bill;
	
	if (numberofunits <= 100) {
	  bill = numberofunits * 10;
	}
	
	else if (numberofunits <= 200) {
		bill = numberofunits * 15;
	}
	
	else if (numberofunits > 200) {
		bill = numberofunits * 20;
	}
	
	return bill;
	
}