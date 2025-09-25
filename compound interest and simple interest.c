//simple programing 
/*
Name:Alfred koome
adm:CT101/g/26551/25
Dispription:compound interest
*/

#include<stdio.h>
int main(){

float compound_interest,simple_interest;
float principal_amount;
int time,rate;

printf("principal-amount:\n");//input from the user 
scanf("%f",&principal_amount);

printf("time(year):\n");//input from the user 
scanf("%d",&time);

printf("rate(percentage):\n");//input from the user 
scanf("%d",&rate);


//formula for simple_interest =principal_amount*time*rate/100; 
simple_interest=principal_amount*time*rate/100;

//formula for compound_interest=principal_amount*pow((1+rate/100),time)
compound_interest=principal_amount*pow((1 + rate/100),time);
printf("compound_interest is ksh %1f:\n",compound_interest);
printf("simple_interest is ksh %1f:\n",simple_interest);
return 0;
}