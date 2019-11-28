/*
    Program: To check whether is is alphabet or not
    Date:27th November 2019
    Author:Harsh Mishra
*/
#include<stdio.h>
main()
{
    char ch ;
    printf("Enter the value u want: ");
    scanf("c",&ch);
    if((ch>='a'&&ch<='b')||(ch>='A'&&ch<='Z'))
        printf("It is An alphabet");
    else
        printf("Not an alphabet");
}
