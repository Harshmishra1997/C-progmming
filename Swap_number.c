/*
    Program: Swap two Number without temp Variable
    Date:27th November 2019
    Author:Harsh Mishra
*/
#include<stdio.h>
main()
{
    int a =10 , b =5, temp ;
    printf("The value of the A = %d and B = %d before swapping",a,b);
    temp=a;
    a=b;
    b=temp;
  printf("\nThe value of the A = %d and B = %d before swapping",a,b);
}
