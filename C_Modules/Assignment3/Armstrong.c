#include<stdio.h>
#include<conio.h>
void main()
{
    int num, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;    // Store the original number
    while(num > 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }
    if(temp == sum)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    getch();
}