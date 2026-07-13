#include<stdio.h>
#include<conio.h>
void main(){
	int a,res,i;
	printf("\n enter a number:-");
	scanf("%d",&a);
	for(i=1;i<=10;i++){
	res=a*i;
	printf("\t%d",res);
}
getch();
}