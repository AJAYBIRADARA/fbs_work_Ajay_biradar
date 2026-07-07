#include<stdio.h>
#include<conio.h>
void main(){
	int a,fist,last;
	printf("\n enter a number:-");
	scanf("%d",&a);
	fist=a/100;
	last=a%10;
	if(fist==last)
	printf("\n give number is  pallindrome");
	else
	printf("\n give number is not  pallindrome");
	getch();
}