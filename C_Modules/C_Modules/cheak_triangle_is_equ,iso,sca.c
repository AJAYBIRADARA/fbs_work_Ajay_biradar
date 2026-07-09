#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	printf("\n enter a triangle 3 sides:-");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c){
		printf("\n Equilateral Triangle");
	}else if(a==b||b==c||a==c){
		printf("\n Isosceles Triangle");
	}else if(a!=b&&b!=c&&a!=c){
		printf("\n Scalene Triangle ");
	}
	getch();
}
