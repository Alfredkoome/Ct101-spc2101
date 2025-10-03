//simple programing 
/*
Name:Alfred koome
adm:CT101/g/26551/25
Dispription:water bill checker
*/

#include<stdio.h>
int main (){

int unit;
float bill;
printf("ENTER THE NUMBER OF WATER UNIT CONSUMED:\n");
scanf("%d",&unit);

 if(unit<=30){bill=
 unit*20;}
 else if (unit<=60){
 bill=(30*20)+(unit-30)*25;}
 else{bill=(30*20)+(30*25)+(unit-60)*30;}
 printf("TOTAL BILL:KES %.2f",bill);
 return 0;
 }