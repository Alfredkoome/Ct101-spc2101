//simple c program
/*
Name:Alfred koome
Reg No: CT101/G/26551/25
Date: 29/09/2025
Description: A C program that displays buddles and their cost .
*/

#include <stdio.h>
int main (){
int choice;

printf("1.100 MB @ KES 50:\n");
printf("2.200 MB @ KES 200:\n");
printf("3.1   GB @ KES 350:\n");
printf("4.2   GB @ KES 600:\n");

printf("enter your choice 1-4:\n");
scanf("%d",&choice);

if (choice == 1){
printf("you selected 100MB. Cost =KES 50:\n");}
else if ( choice == 2){
printf("you selected 200MB. Cost =KES 200:\n");}
else if(choice ==3){
printf("you selected 1GB. Cost =KES 350:\n");}
else if(choice==4){
printf("you selected 2GB.Cost =KES 600:\n");}
else{printf("invalid choice");}

return 0;
}

