#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	printf("\n enter a character:-");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')  
	printf("\n given character is vowel");
	else
	printf("\n give character is not vowel");
	getch();
}