/*
    Program : Sum of N natural Numbers
       Date : 27th November 2019
      Author: Harsh Mishra
*/
#include<stdio.h>
int integerSum(int n);
main()
{
    int n,sum ;
    printf("enter the value of n : ");
    scanf("%d",&n);
    integerSum(n);
}
int integerSum(int n)
{
    int sum=0;
    sum=(n*(n+1))/2;
    printf("the sum of integer is : %d ", sum);
}
