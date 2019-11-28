/*
    Program: To check whether is is alphabet or not
    Date:27th November 2019
    Author:Harsh Mishra
*/
#include<stdio.h>
main()
{
    int  ch;
    printf("Enter the value: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("It is upper Case");
    else if(ch>=97 && ch<=122)
        printf("It is lower case");
    else if(ch>=48 && ch<=57)
        printf("It is Number");
    else
        printf("It is symbol");
}
