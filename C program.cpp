/*
Nam:Ian Murithi
Reg No:CT100/G/30771/26
Gender:Male
Description:This is a C program that promts the user to enter the following detail.
*/

#include<stdio.h>

int main(){
	float Height;
	double Bankbalance;
	int Phonenumber;
	
	printf("Enter your heights: \t");
	scanf("%f", &Height);
	
	printf("Enter your Bank  balance: \t");
	scanf("%1f", &Bankbalance);
	
	printf("Enter your phone number: \t");
	scanf("%d", &Phonenumber);
	
	printf("Your Height is:%f\n",Height);
	printf("Your Bank balance is:%1f\n",Bankbalance);
	printf("YOur phone number is:%d\n",Phonenumber);
	
	return 0;
} 
	
