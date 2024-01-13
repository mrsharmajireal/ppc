#include<stdio.h>
int main(){
int i, fact=1, number; fact=1,number;
printf("Enter a Number");
scanf("%d", &number);
for (i=1;i<=number; i++)
{
fact=fact*i;
printf("Factorial Of %d is %d", number, fact);
return 0;
}}
