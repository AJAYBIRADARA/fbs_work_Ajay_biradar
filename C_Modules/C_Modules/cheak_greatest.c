#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	printf("\n enter a three number:-");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		printf("\n this number is greatest:- %d",a);
	}else if(b>c){
		printf("\n this number is greatest:-%d",b);
	}else if(a<c){
		printf("\n this number is greatest:-%d",c);
	}
	getch();
}