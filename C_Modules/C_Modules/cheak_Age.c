#include<stdio.h>
#include<conio.h>
void main(){
	int age;
	printf("\n enter a age:-");
	scanf("%d",&age);
	if(age<12){
		printf("\n Child");
	} 
	else
	if(age>=12 && age<=19) {
		printf("\nTeenager");
	}
	else
	if(age>=20 && age<=59) {
		printf("\n Adult");
	}
	else
	if(age>=60){
		printf("\n Senior");
	}
	getch();
}