#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	char op;
	printf("\n enter a two number:-  ");
	scanf("%d%d",&a,&b);
	printf("\n enter a operator  (+,-,/,*,%):- ");
	scanf("%s",&op);
	if(op=='+'){
		c=a+b;
		printf("\n  :-%d",c);
	}else if(op=='-'){
		c=a-b;
		printf("\nSubtraction is:-%d",c);
	}else if(op=='/'){
		c=a/b;
		printf("\n Division is:-%d",c);
	}if(op=='*') { 
		c=a*b;
		printf("\n Multiplication:-%d",c);
	}else if(op=='%'){
		c=a%b;
		printf("\n Remainder is :-%d",c);
	}
getch();	
}