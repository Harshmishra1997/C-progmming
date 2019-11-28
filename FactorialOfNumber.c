/*
    Program : Finding the Factorial of the Number
        Date: 27th November 2019
      Author: Harsh Mishra
*/
#include<stdio.h>
main()
{
    int i,n ;
    printf("enter the value: ");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
        n=n*(i);
    }
    printf("\n The factorial is = %d",n);
}
