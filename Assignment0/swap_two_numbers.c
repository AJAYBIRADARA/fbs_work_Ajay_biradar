// 4 Write a C program to swap two numbers using a temporary third variable.
#include<stdio.h>
#include<conio.h> //  optional ! my system can't hold output screen that why i use it 
void main(){
	int a=10,b=20,c;
	c=a;
	a=b;
	b=c;
	printf("\n value of a is: %d\n value of b is:%d",a,b);
	getch(); //  optional 
}
