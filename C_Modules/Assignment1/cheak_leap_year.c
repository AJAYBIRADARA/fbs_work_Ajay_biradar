#include<stdio.h>
#include<conio.h>
void main(){
	int year;
	printf("\n enter a year:-");
	scanf("%d",&year);
	if(year%400==0)
    printf("\n year is leap ");
    else if(year%100==0)
    printf("\n year is leap");
    else if(year%4==0)
    printf("\n year is leap");
    else
    printf("\n year is not leap");
    getch();
} 