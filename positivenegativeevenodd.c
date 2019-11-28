/*
    Program: To check whether it is Positive Negative Even odd
    Date:27th November 2019
    Author:Harsh Mishra
*/
#include<stdio.h>
main()
{
    int n ;
    printf("enter the value of n : ");
    scanf("%d",&n);
    if(n<0)
        printf("It is negative");
    else if(n>0)
        printf("It is Positive");
    else if(n/2==0)
        printf("It is Even number");
    else
        printf("it is odd number");
}
