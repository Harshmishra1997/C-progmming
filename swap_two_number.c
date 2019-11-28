/*
    Program: Swap two Number without temp Variable
    Date:27th November 2019
    Author:Harsh Mishra
*/
#include<stdio.h>
main()
{
    int a=10 , b=5,sum=0;
    printf("the value of A=%d and B=%d ",a,b);
    sum=a+b;
    printf("\n%d",sum);
    a=sum-a;
    b=sum-b;
    printf("\n\nnumber after the swapping");
    printf("\na = %d",a);
    printf("\nb = %d",b);
}
