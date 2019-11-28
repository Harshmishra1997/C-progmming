/*
    Program: Find the SUM of Digit in an integer
    Date:27th November 2019
    Author: Harsh Mishra
*/
#include<stdio.h>
main()
{

    int n , sum=0,rem=0 ;
    printf("enter the value of integer: ");
    scanf("%d",&n);
    while(n!=0)
    {
        sum = sum + n%10 ;
        n/=10;
    }
    printf("The sum of digit is: %d",sum);
}
