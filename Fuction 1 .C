/*
Name:Ian Murithi
Reg No:CT100/G/30771/26
Description:A C program that displays the net salary of an employing using a function
*/

# include <stdio.h>

float calculateTax(float gross_salary);


int main() {
	
	float gross_salary;
	float Net_salary;
	float tax;
	
	printf("Enter the employee's gross salary: \t");
	scanf("%f", &gross_salary);
	
	tax = calculateTax(gross_salary);
	Net_salary = gross_salary - tax;
	
	printf("The employee's gross salary is: %f\n", gross_salary);
	printf("The tax amount is: %f\n", tax);
	printf("The Net salary is: %f\n", Net_salary);
		
	return 0;
}

float calculateTax(float gross_salary) {
	float tax;
	
	if (gross_salary <= 30000) {
		tax = gross_salary * 0.05;
	}
	
	else if (gross_salary >= 59999) {
		tax = gross_salary * 0.1;
	}
	 
	 else if (gross_salary > 60000)	{
		 tax = gross_salary * 0.15;
	 }
	
	 return tax;
	
}