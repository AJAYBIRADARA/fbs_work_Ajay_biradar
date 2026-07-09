#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	printf("\n enter a mark:-");
	scanf("%d",&a);
	if(a>=75) {
		printf("\n Distinction");
	}else if(a>=65) {
		printf("\n First Class");
	}else if(a>=55) {
		printf("\n Second Class");
	}else if(a>=40) {
		printf("Pass Class");
	}else if(a<40) {
		printf("\n Fail");
	}
	getch();
}