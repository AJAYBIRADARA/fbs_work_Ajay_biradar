#include<stdio.h>
#include<conio.h>
void main(){
	int no;
	printf("\n enter  a number :-");
	scanf("%d",&no);
    if(no%3==0 && no%5!=0){
    printf("\n Divisible by 3 but not by 5");
	}
	else 
	if(no%5==0 && no%3!=0){
    printf("\n Divisible by 5 but not by 3");
	} 
	else 
	if(no%3==0 && no%5==0){
	printf("\n Divisible by Both");
	}
	else
	printf("\n Divisible by non");
	getch();
}