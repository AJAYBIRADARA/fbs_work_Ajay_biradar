#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	int res1;
	printf("\n enter a units:-");
	scanf("%d",&a);
	if(a<=50){
		res1=a*30;
		printf("%d",res1);
	}else if(a>=51 && a<=150){
		res1=a*40;
		printf("%d",res1);
	}else if(a>=151){
		res1=a*50;
		printf("%d",res1);
	getch();
}
}