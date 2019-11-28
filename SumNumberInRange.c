/*
    Program: Find the number of Digit in a Range
    Date:27th November 2019
    Author: Harsh Mishra
*/
#include<stdio.h>
main()
{
    int i , n ,sum=0;
    printf("enter the range of for Sum: ");
    scanf("%d%d",&i,&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("\nthe sum in the range is : %d",sum);
    }
}
