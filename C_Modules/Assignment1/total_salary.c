#include<stdio.h>
#include<conio.h>
void main()
{
    int bs,da,ta,hra,total;
    printf("Enter Basic Salary: ");
    scanf("%d", &bs);
    if(bs<=5000)
    {
        da = bs*10/100;
        ta = bs*20/100;
        hra = bs*25/100;
        total = bs+da+ta+hra;
        printf("Total Salary = %d",total);
    }
    else
    {
        da = bs*15/100;
        ta = bs*25/100;
        hra = bs*30/100;
        total = bs+da+ta+hra;
        printf("Total Salary = %d", total);
    }
    getch();
}