// 3 Write a C program to convert temperature from Celsius to Fahrenheit using the formula: F = (C *9/5) + 32 
#include<stdio.h>
#include<conio.h>   //  optional ! my system can't hold output screen that why i use it 
void main(){
	float Fahrenheit, Celsius=30;
	Fahrenheit=(Celsius *9/5) + 32;
	printf("Fahrenheit is %f",	Fahrenheit);
	getch();  //  optional 	
}
