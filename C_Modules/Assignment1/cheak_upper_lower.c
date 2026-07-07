#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
        printf("\nGiven character is uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("\nGiven character is lowercase");
    else
        printf("\nIt is not an alphabet");
    getch();
}