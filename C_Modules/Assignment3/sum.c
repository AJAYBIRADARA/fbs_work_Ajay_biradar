#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	int sum=0;
	for(i=1;i<=5;){
		sum=i+sum;
		i++;
	}
	printf("%d",sum);
	getch();
}
/// user input... 
/* #include<conio.h>
#include<stdio.h>
void main(){
	int start,i,end;
	printf("\n enter a start and end no.");
	scanf("%d%d",&start,&end);
	int sum=0;
	for(i=start;i<=end;){
		sum=i+sum;
		i++;
	}
	printf("\n %d",sum);
	getch();
}*/