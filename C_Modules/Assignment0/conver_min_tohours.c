#include<stdio.h>
#include<conio.h>
int main(){
	int minutes=190;
	int hours,re_minutes;
	hours=minutes/60;
	re_minutes=minutes%60;
	printf("\n given minutes is %d \n total hours is : %d\n remaining minutes is %d",minutes,hours,re_minutes);
	getch();
}
