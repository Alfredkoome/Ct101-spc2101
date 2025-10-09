//simple programing 
/*
Name:Alfred koome
adm:CT101/g/26551/25
Dispription:do while loop to access password 
*/

#include<stdio.h>
int main ()
{
int password=1234;
int psw;
do{
printf("Enter password");
scanf("%d",&psw);
}
while(psw !=password);
printf("access grated\n");

 return 0;
 }