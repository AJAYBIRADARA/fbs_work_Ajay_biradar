#include<stdio.h>
#include<conio.h>
void main(){
	int a,total,discount;
	char ch;
	printf("\n Enter a Price:-");
	scanf("%d",&a);
	printf("\n you are student ? press Y or N :-");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='Y'){
		if(a>=500){
			discount=(a*20)/100;
			total=a-discount;
			printf("\n ----details----");
			printf("\n your discount Amount is %d:- ",discount);
			printf("\n final Amount includeing discount is:- %d ",total);
		} else if(a<500){
			discount=(a*10)/100;
			total=a-discount;
			printf("\n ----details----");
			printf("\n  discount Amount is %d :- ",discount);
			printf("\n final Amount includeing discount is:- %d",total);
			
		}  
	}else if(ch=='N'){
		if(a>=600){
			discount=(a*15)/100;
			total=a-discount;
			printf("\n ----details----");
			printf("\n your  discount Amount is :- %d",discount);
			printf("\n final Amount includeing discount is:-  %d",total);
		}else if(a<600){
			printf("\n you are noy Eligible for discount");
		printf("\n your total price is :-  %d",a);
		}
	}
getch();
}