/*
    Program : Find the input is vowel or consonant
       Date : 27th November 2019
     Author : Vowel or consonant
*/
#include<stdio.h>
main()
{
    char ch ;
    printf("enter the value: ");
    scanf("%c",&ch);
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
        printf("This is vowel");
    else
        printf("This is consonant");
}
