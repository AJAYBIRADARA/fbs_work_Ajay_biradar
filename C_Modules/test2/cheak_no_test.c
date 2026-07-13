#include<stdio.h>
#include<conio.h>
void main(){
	int num;
	printf("\n enter a number:-");
	scanf("%d",&num);
	if(num>=1)
	printf("\n possitive");
	else if(num==0)
	printf("\n netural");
	else if(num<0)
	printf("\n negative");
	getch();
}