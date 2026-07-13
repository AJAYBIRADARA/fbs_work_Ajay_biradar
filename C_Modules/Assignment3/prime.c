#include<stdio.h>
#include<conio.h>
void main()
{
    int no,i,flag = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    if(no <= 1)
    {
        printf("Not a Prime Number");
    }
    else
    {
        for(i = 2; i < no; i++)
        {
            if(no % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("Prime Number");
        else
            printf("Not a Prime Number");
    }
    getch();
}