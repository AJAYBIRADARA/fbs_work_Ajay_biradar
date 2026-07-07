#include<stdio.h>
#include<conio.h>
typedef struct student{
	int rollno,mark;
	char name[10];
}student;
int main(){
	student arr[4];
	for(int i=0;i<4;i++){
		printf("\n enter a rollno:-");
		scanf("%d",&arr[i].rollno);
		printf("\n enter a mark:-");
		scanf("%d",&arr[i].mark);
		printf("\n enter a name:-");
		fflush(stdin);
		scanf("%s",arr[i].name);
	}
	    printf("\n -------student details-----");
		for(int i=0;i<4;i++){
		printf("\t  rollno:-%d",arr[i].rollno);
		printf("\t  mark:-%d",arr[i].mark);
		printf("\t  name:-%s",arr[i].name);
	}
	return 0;
	getch();

}