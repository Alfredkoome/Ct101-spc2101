//simple progaming
/*
Name:Alfrkoome 
adm no:ct101/G/26551/25
Discription:bank loan
*/

#include<stdio.h>
//main function 
int main() {
float age,income;
printf("enter users age");
scanf("%f",&age);
 
 printf("enter users annual income");
 scanf("%f",&income);
 
 if (age>=21 &&income >=21000)
 {printf("congratulations you qualify for loan :\n");}
 if (age<21 &&income <21000)
 {printf("unfortunately,we are unable to offer you loan at this time:\n");}
  
  if (age <21 && income>=21000)
 {printf("unfortunately,we are unable to offer you loan at this time:\n");}
   
   if (age >21 &&income<21009)
  {printf("unfortunately,we are unable to offer you loan at this time:\n");}
  
  return 0;
 }