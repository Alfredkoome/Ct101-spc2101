//simple programing 
/*
Name:Alfred koome
adm:CT101/g/26551/25
Dispription:c program for a ATM 
*/

#include<stdio.h>
int main ()
{
int amount;
 int balance= 50000;
 printf("your current balance is %d\n ",balance);
  while (balance>=0)
  {
        printf("enter amount to withdraw\n");
        scanf("%d",&amount);
        balance=balance-amount; 
        printf("new balance: =%d \n",balance);
   }
   printf("insufficient balance");
   
 return 0;
 }